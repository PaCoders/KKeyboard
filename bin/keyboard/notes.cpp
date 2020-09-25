#include "notes.h"

Keyboard::Keyboard(int l): tones(new double[l]){
    
}

const double Keyboard::tocar(int key){return tones[key];}
