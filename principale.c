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
