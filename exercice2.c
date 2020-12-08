// EXERCICE 2

#include <stdlib.h>
#include <stdio.h>
#include "tp4.h"

int main() {
    int* MyPtr1 = &MyTab1[TAILLETAB1-1];

    for (int i = 0; i<TAILLETAB1; i++) {
        MyTab1[i] = i+1;
        printf("%d%c",MyTab1[i],SEPARATEUR);
    }

   printf("\n");

    while (*MyPtr1>0) {
       printf("%d%c",*MyPtr1,SEPARATEUR);
       MyPtr1 = MyPtr1-1;
   }

   return EXIT_SUCCESS; 
}