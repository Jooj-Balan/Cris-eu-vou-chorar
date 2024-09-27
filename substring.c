#include <stdio.h>

void substring(char texto1[], char texto2[],
               int inicio, int fim){
     int i, j;
     for (i=inicio, j=0; i<=fim;i++, j++){
        texto2[j] = texto1[i];
     }

     texto2[j]= '\0';

}
