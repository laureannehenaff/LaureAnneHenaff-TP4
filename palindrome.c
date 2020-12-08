// EXERCICE 4

#include <stdlib.h>
#include <stdio.h>
#include "tp4.h"
#include <string.h>
#include <stdbool.h>

int main() {
    char mot[10];
    char inverse_mot[10];
    int taille_mot;
    bool meme=true;
    
    printf("Entrez le mot : ");
    scanf("%s",mot);
    taille_mot=strlen(mot);

    for (int i=0; i<taille_mot; i++) {
        inverse_mot[i]=mot[(taille_mot-1)-i];
        if (inverse_mot[i]!=mot[i]) {
            meme=false;
        }
    }

    if (meme==true) {
        printf("Le mot est un palindrome\n");
    }
    else {
        printf("Le mot n'est pas un palindrome\n");
    }

    return EXIT_SUCCESS;
}