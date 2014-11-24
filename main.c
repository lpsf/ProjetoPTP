#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "sub.h"



int main () {

	Game base = newBoard();

	saver(base);

	print(base);

	Game copia = base;

	copia.count = 0;


	while(copia.count < TENT) {

		scanf("%c", &base.command);

		if(base.command >= '0' && base.command <= '5') {
			copia.count++;

		}

		work(&base, &copia);

		base = copia;

	}

	printf("\t\t\t GAME OVER");

	return 0;
}
