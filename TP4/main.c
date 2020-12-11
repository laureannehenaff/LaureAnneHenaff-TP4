// EXERCICE 1

#include <stdlib.h>
#include <stdio.h>
#include "tp4.h"

int main() {
    HEURE HeureDebut;
    HEURE HeureFin;
    HEURE Duree;

    HeureDebut.heure = 12;
    HeureDebut.minute = 30;
    Duree.heure = 00;
    Duree.minute = 45;
    HeureFin.minute = (HeureDebut.minute + Duree.minute) % 60; 
    HeureFin.heure = HeureDebut.heure + Duree.heure + (HeureDebut.minute + Duree.minute - HeureFin.minute)/60;

    printf("HeureDebut : %d:%d\n",HeureDebut.heure,HeureDebut.minute);
    printf("Duree : %d:%d\n",Duree.heure,Duree.minute);
    printf("HeureFin : %d:%d\n",HeureFin.heure,HeureFin.minute);

    return(EXIT_SUCCESS);
}