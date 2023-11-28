#include <stdio.h>


   int  alfabetico(char *a, char *b);
   int abitanti(int a, int b); 

   int main(void) {
	 char nome1[11];  
	 char nome2[11];  
	 int  ab1, ab2;
     printf("Inserisci il nome della prima città e il numero di abitanti:\n");
     scanf("%s %d", nome1, &ab1);   
     printf("Inserisci il nome della seconda città e il numero di abitanti:\n");
     scanf("%s %d", nome2, &ab2);
     printf("%s (%d)\n", nome1, ab1);
     printf("%s (%d)\n", nome2, ab2);
     
     if (alfabetico(nome1, nome2) == 1) 
		 printf("%s \n%s \n", nome1, nome2);
     else
		 printf("%s \n%s \n", nome2, nome1);

     if (abitanti(ab1, ab2) == 1) 
		 printf("%s \n%s \n", nome1, nome2);
     else
		 printf("%s \n%s \n", nome2, nome1);

     		 
   }

   int alfabetico(char *a, char *b) {
	  int risultato = 1;
	  int i = 0;
	  while (i<11) {
	    if ( a[i] > b[i] ) {
			risultato = 2;
			break; 
		}	
	    if ( a[i] < b[i] ) 
	      break; 
	    i++;
	  }  
	  return risultato;
   }
   
   int abitanti(int a, int b) {
	   if (a<b) return 1;
	   else return 2;
   }
   
   
