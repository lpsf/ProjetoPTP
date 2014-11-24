Game newBoard() {

	//Generates random numbers in the [0,5] interval and sets them to each position in the matrix

	Game a = {0, 0};

	srand( (unsigned)time(NULL) );

	for(a.i = 0; a.i < TAM; a.i++) {
		for(a.j = 0; a.j < TAM; a.j++) {
			a.tab[a.i][a.j] = rand() % COR;
		}
	}
	return a;



}

void save(Game a) {
	FILE *flood = fopen ("floodit.txt", "w");



		for(a.i = 0; a.i < TAM; a.i++) {

			for(a.j = 0; a.j < TAM; a.j++) {
				fprintf(flood, "%i ", a.tab[a.i][a.j]);
			}
			fprintf(flood,"\n");
		}

	fclose(flood);

}

void saver(Game a) {
	FILE *flood = fopen ("floodrand.txt", "w");



		for(a.i = 0; a.i < TAM; a.i++) {

			for(a.j = 0; a.j < TAM; a.j++) {
				fprintf(flood, "%i ", a.tab[a.i][a.j]);
			}
			fprintf(flood,"\n");
		}

	fclose(flood);

}

void load(Game *a) {

	FILE *flood = fopen ("floodit.txt", "r");

		for(a->i = 0; a->i < TAM; a->i++) {
			for(a->j = 0; a->j < TAM; a->j++) {
				fscanf(flood, "%i ", &a->tab[a->i][a->j]);
			}

		fscanf(flood, "\n");

		}

	fclose(flood);

}

void print (Game a) {

	//Prints each element to the screen and then, when i's value increases, prints a line break to give the matrix its shape

	printf("\t\t\t*=*=*=*=*FLOOD IT!*=*=*=*=*\n\n");


	for(a.i = 0; a.i < TAM; a.i++) {

		printf("\t\t\t");

		for(a.j = 0; a.j < TAM; a.j++) {
			printf("%i ", a.tab[a.i][a.j]);
		}
	printf("\n");
	}
	printf("\n");
}

void change(Game a, Game *b, int i, int j) {

	//Compares the a and b board and alters the elements on the b board so long as they are equal to an element in their vicinity, starting from the [0][0] point

	if(b->tab[i+1][j] == a.tab[i][j]) {

        b->tab[i+1][j] = a.value;

        change(a, b, i+1, j);

    }



   if(b->tab[i][j+1] == a.tab[i][j]) {


        b->tab[i][j+1] = a.value;

        change(a, b, i, j+1);


    }


   if(i > 0 && j > 0 && b->tab[i-1][j] == a.tab[i][j]) {


        b->tab[i-1][j] = a.value;

        change(a, b, i-1, j);

    }



    if(i > 0 && j > 0 && b->tab[i][j-1] == a.tab[i][j]) {


        b->tab[i][j-1] = a.value;

        change(a, b, i, j-1);

    }

}

void work (Game *a, Game *b) {

		switch(a->command) {

			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':

				a->count++;
				b->i = 0;
				b->j = 0;

				//Sets the starting i and j parameters to 0 so the "change" subroutine can run properly

				a->value = a->command - 48;

				change(*a, *&b, b->i, b->j);

				b->tab[0][0] = a->value;

				print(*b);

				break;

			case 'q':

				printf("\t\t\t YOU GAVE UP");

				exit(0);

				break;


			case 's':

				printf("\t\t\t Game saved\n\n");

				save(*b);

				break;

			case 'o':

				load(*&a);

				print(*a);

				break;

		}
}
