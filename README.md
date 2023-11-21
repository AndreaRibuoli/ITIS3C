# ITIS3C
Appunti per lezioni

### Opzioni particolari

----
#### -E

Invocando:

``` 
gcc -o prova1.c -E prova.c
```

oppure

``` 
gcc  -E prova.c > prova1.c 
```

ottengo nel file di output specificato (con l'opzione `-o`) il sorgente C con gli include espansi; il file `prova1.c` conterrà quanto effettivamente presentato al compilatore C dopo la fase di pre\-compilazione

----
#### -E -C

Invocando:

``` 
gcc -o prova2.c -E -C prova.c
```

oppure

``` 
gcc  -E -C prova.c > prova2.c 
```

come nel caso **\-E** ma senza omettere i commenti C.

----
#### -S

Invocando:

``` 
gcc -S prova.c
```

oppure

``` 
gcc -o prova.s -S prova.c 
```
 
ottengo nel file di output specificato (con l'opzione `-o`) il sorgente assembly; il file `prova.s` contiene il sorgente pronto per essere compilato dall'assembler.

----
#### -c

Invocando:

``` 
gcc -c prova.c
```

oppure

``` 
gcc -o prova.o -c prova.c 
```

ottengo nel file di output specificato (con l'opzione `-o`) il modulo oggetto; il file `prova.o` contiene il modulo oggetto rilocabile pronto per essere *link\-editato* dal linker.

----
#### (omettendo opzioni)

Invocando:

``` 
gcc -o prova prova.c 
```

ottengo nel file di output specificato (con l'opzione `-o`) il programma eseguibile 

### Lettura di più dati con un'unica operazione

----
#### C

``` c
scanf("%d %d", &base, &altezza);
```

L'*Invio* (ritorno a capo) da parte dell'utente termina la lettura.

----
#### C++

``` cpp
cin >> base >> altezza;
```

I dati richiesti possono essere separati anche dal ritorno a capo.

### Strutture di iterazione

* con controllo della condizione (postcondizionale) `do { } while ( );`
* con controllo della condizione (precondizionale) `while ( ) { }`
* enumerativa `for ( ; ; ) { }`

----

### Funzioni in C

**esempio.h**

``` C
void esempio(int);
```

**esempio.c**

``` C
#include <stdio.h>
#include "esempio.h"

void esempio(int volte) {
  for(int i=0; i<volte; i++) 
    printf("Ciao!\n");
}
```

**principale.c**

``` C
#include <stdio.h>
#include "esempio.h"

int main(int argc, char *argv[]) {
	int value = 1;
	if (argc > 1) {
	  sscanf(argv[1], "%d", &value);
	}  
	esempio(value);	
	return 0;
}
```

I passi di compilazione sono 3:

``` sh
gcc -c esempio.c
gcc -c principale.c
gcc -o principale esempio.o principale.o
```

Invocando `./principale 5` otteniamo:

```
Ciao!
Ciao!
Ciao!
Ciao!
Ciao!
```
