#include "notes.h"
#include <stdio.h>
#include <string.h>

Keyboard::Keyboard(int l): tones(new double[l]){
    FILE *f;
    f = fopen("frecuencias.txt","r");

    if(f == NULL){
        exit(1);
        fclose(f);
    }
    
    else{
        int i = 0;
        string fr;

        while(!f.eof()){
            f>>fr;
            tones[i] = atof(fr);
            i++;
        }

        fclose(f);
    }
    
}

const double Keyboard::tocar(int key) const{return tones[key];}
