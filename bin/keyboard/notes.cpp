#include "notes.h"

Keyboard::Keyboard(int l): tones(new double[l]){
    tones[0] = 4186.01;
    tones[1] = 3951.07;
    tones[2] = 3729.31;
    tones[3] = 3520.00;
    tones[4] = 3322.44;
    tones[5] = 3135.96;
    tones[6] = 2959.96;
    tones[7] = 2793.83;
    tones[8] = 2637.02;
    tones[9] = 2489.02;
    tones[10] = 2349.32;
    tones[11] = 2217.46;
    tones[12] = 2093.00;
    tones[13] = 1975.53;
    tones[14] = 1864.66;
    tones[15] = 1760.00;
    tones[16] = 1661.22;
    tones[17] = 1567.98;
    tones[18] = 1479.98;
    tones[19] = 1396.91;
    tones[20] = 1318.51;
    tones[21] = 1244.51;
    tones[22] = 1174.66;
    tones[23] = 1108.73;
    tones[24] = 1046.50;
    tones[25] = 987.767;
    tones[26] = 880.00;
    tones[27] = 783.991;
    tones[28] = 698.456;
    tones[29] = 659.255;
    tones[30] = 523.251;
    tones[31] = 493.883;
}

const double Keyboard::tocar(int key) const{return tones[key];}
