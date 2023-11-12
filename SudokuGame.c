//Dylan McIntee
//Sudoku Game

#include<stdio.h>
#include<string.h>
#include<ctype.h>

void createPuzzle(int difficulty, int r, int c, int boxes [r][c]); 

void displayPuzzle(int r, int c, int boxes [r][c]);

void populateBox();

void playRound();

int playAgain();

int winOrLose();

int main()
{
    int r = 9;

    int c = 9;

    int easyPuzzle [9][9] = { {0, 0, 1, 0, 7, 3, 0, 4, 0} , {0, 0, 0, 4, 0, 0, 5, 6, 0} , {0, 8, 2, 0, 0, 9, 0, 0, 0,} , {0, 0, 7, 0, 0, 4, 8, 5, 0} , {0, 0, 0, 1, 5, 0, 0, 9, 7} , {8, 3, 0, 0, 0, 0, 0, 0, 0} , {6, 0, 4, 0, 0, 0, 0, 0, 5}, {0, 0, 0, 9, 0, 0, 0, 0, 2} , {0, 0, 9, 6, 0, 2, 1, 3, 0} };

    int difficulty = 0;

    printf("\nWelcome to Sudoku!\n\n");

    printf("How hard would you like your puzzle to be from 1-3?\n\n");

    scanf(" %d", &difficulty);

    printf("\n");

    printf("Okay, creating your Sudoku Puzzle...\n\n");

    //createPuzzle(difficulty, r, c, grid);

    displayPuzzle(r, c, easyPuzzle);

    return 0;
}

void createPuzzle(int difficulty, int r, int c, int boxes [r][c])
{
    if(difficulty == 1)
    {

    }
    else if(difficulty == 2)
    {

    }
    else
    {

    }
}

void displayPuzzle(int r, int c, int boxes [r][c])
{
    printf("-------------------------------------------------------\n");

    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            printf("|");

            printf("\033[1;31m");

            if(boxes[i][j] == 0)
            {
                printf("  ?  ");
            }
            else
            {
                printf("\033[0;32m");

                printf("  %d  ", boxes[i][j]);
            }

            printf("\033[0;37m");
        }

        printf("|");

        printf("\n");
        
        printf("-------------------------------------------------------\n");
    }

    printf("\n");
}

void populateBox()
{

}

void playRound()
{

}

int playAgain()
{
    return 1;
}

int winOrLose()
{
    return 1;
}
