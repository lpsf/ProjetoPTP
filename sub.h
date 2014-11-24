#define TAM 15
#define COR 6
#define TENT 5

//TAM corresponds to the size of the matrix, assuming it has the same number of lines and columns
//COR determines the set of values used to populate the matrix, ranging from 0 to COR -1
//TENT measures the number of plays allowed before the game ends

typedef struct {

    int i;
	int j;
    int count;
	int tab[TAM][TAM];
	char command;
	int value;
} Game;
