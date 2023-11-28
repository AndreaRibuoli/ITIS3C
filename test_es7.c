/*
 
 gcc -c test_es7.c
 gcc -c es7.c
 gcc -o es7 test_es7.o es7.o
 
 */
 
 #include <stdio.h>
 #include "es7.h"
 
 int main(void) {
   float prezzo, sconto;
   printf("Forniscimi il prezzo e lo sconto applicato al prodotto:\n");
   scanf("%f %f", &prezzo, &sconto);	 
   printf("Il prezzo scontato è %.2f €\n", prezzoScontato(prezzo, sconto));
 }
