#include "notes.h"
#include <fstream>

Keyboard::Keyboard(int l): tones(new double[l]){
    ifstream f("frecuencias.txt");
    int i = 0;
    while(!f.eof()){
        f>>tones[i];
        i++;
    }
    f.close();
}

const double Keyboard::tocar(int key) const{return tones[key];}
