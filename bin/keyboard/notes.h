/* *******************************
   *                             *
   *      NOTAS DE UN PIANO      *
   *                             *
   *******************************
*/

#ifndef _NOTES_H
#define _NOTES_H

class Keyboard{
    public:
        Keyboard(int l = 88); //constructor
        const double tocar(int key) const; //Metodo observador
    private:
        double* tones; //Vector de tonos
};

#endif
