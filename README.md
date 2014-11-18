ProjetoPTP
==========
13.10.2014

Project started

==========

27.10.2014

Generated grid with random numbers between 0 and 5

Took code for random number generator from http://goo.gl/FeA7Zd

(Together)

==========

30.10.2014

Started modularization

(Together)

=========

03.11.2014

Tweaked with the code to optimize performance

(Together)

=========

04.11.2014

Presented initial interface for evaluation, started creating code for user input

Created code for linear update of the game board, still trying to work out recurssive aspect and diagonal updating

(Together)

=========

05.11.2014

Had the idea to create a copy of the board being analyzed and alter the copy so it is easier to compare the elements while altering them

(Together)

Started trying to apply the idea above to the subroutine that alters the board after receiving user input

(Luiz)

Managed to alter the "jogada" subroutine to recursively alter the values in accordance to the game parameters, albeit only on the first line and first column. Closer inspection revealed that after the entire line and column is filled, the routine stops altering the column a few lines down.

(Luiz)

Implementend the "limited number of plays" element effectively

(Luiz)

=======

10.11.2014

Tried to change the subroutine so it would update the board appropriately, but with no success. Removed the "number of plays" element since it wasn't necessary at the moment.

(Together)

======

12.11.2014

Managed to create a subroutine ("analisar") that alters the board correctly, but something in the "jogada" function isn printing the board correctly after one play.

(Luiz)

=====

17.11.2014

Got the game to play correctly by using a pointer in the "analisar" subroutine. However, the program is getting core dumped when the game gets close to ending.

(Luiz)
