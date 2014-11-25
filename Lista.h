#ifndef _Lista
#define _Lista

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 15
#define COR 6
#define TENT 25

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


Game newBoard();
/**
 * Generates random numbers in the [0,5] interval and sets them to each position in the matrix.
 * @param a representa o struct para determinar o númeo de linhas através de a.i ,o de colunas através de a.j e o tabuleiro através de a.tab[i][j].
 *@return a	
*/	


void save(Game a);	
/**
 * Salva o tabuleiro no arquivo "floodit.txt", com o modo escrita.
 * @param a representa o struct para determinar o númeo de linhas através de a.i ,o de colunas através de a.j e o tabuleiro através de a.tab[i][j].
  @return void.
 */
 
void saver(Game a);
/**
 * Salva o tabuleiro gerado com números aleatórios.
 * @param a representa o struct para determinar o númeo de linhas através de a.i ,o de colunas através de a.j e o tabuleiro através de a.tab[i][j].
 *@return void.
*/

void load(Game *a);
/** 
 * Carrega o tabuleiro salvo no arquivo	"floodit.txt".
 * @param *a é um ponteiro de um struct para determinar o número de linhas,colunas e o tabuleiro.
 * @return void.
 */
 
void print (Game a);
/** 
 * Prints each element to the screen and then, when i's value increases, prints a line break to give the matrix its shape 
 * @param a representa um struct para determinar o número de linhas,colunas e o tabuleiro.
 * @return void.
 */
 
void change(Game a, Game *b, int i, int j);
/**
 * Compares the a and b board and alters the elements on the b board so long as they are equal to an element in their vicinity, starting from the [0][0] point.
 * @param a é um struct que representa o tabuleiro com a posição inicial da analise de forma recursiva e a variável temporária value. 
 * @param *b é um ponteiro de struct que representa as posições adjacentes a tab[i][j].
 * @param i representa o número de linhas.
 * @param j representa o número de colunas.
 */
 
void work (Game *a, Game *b);
/**
 * determina a funcionalidades dos comandos que poderão ser selecionados pelo jogador.
 * @param *a é um ponteiro de struct que representa o comando introduzido pelo usuário através de a->command ,o contador através de a->count++ e e a variável temporária através de  a->value.
 * @param *b é um ponteiro de struct que representa a linha,a coluna,a posição inicial do tabuleiro, e o tabuleiro modificado pelo jogador na função print().
*/

#endif
