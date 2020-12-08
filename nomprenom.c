// EXERCICE 3

#include <stdlib.h>
#include <stdio.h>
#include "tp4.h"
#include <ctype.h> //toupper()

int main() {
    char nom[20];
	char prenom[20];
	char sexe;

    printf("Quel est le nom ? ");
    scanf("%s",nom);
    printf("\nQuel est le prénom ? ");
    scanf("%s",prenom);

    printf("\nQuel est le sexe ? H ou F ");
    do {
        sexe=getchar();
        sexe=toupper(sexe);
    } while ((sexe!='H') & (sexe!='F'));


    if (sexe == 'H') {
        printf("\nMonsieur %s %s\n",prenom,nom);
    }
    if (sexe == 'F'){
        printf("\nMadame %s %s\n",prenom,nom);
    }

    return EXIT_SUCCESS;
}