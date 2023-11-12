//Dylan McIntee
//Sudoku Game

#include<stdio.h>
#include<string.h>
#include<ctype.h>

void createPuzzle(int r, int c, int boxes [r][c]);
void displayPuzzle(int r, int c, int boxes [r][c]);
void populateBox();
void playRound();
int playAgain();
int winOrLose();

int main()
{
    int r = 9;

    int c = 9;

    int grid [9][9];

    printf("\nWelcome to Sudoku!\n\n");

    createPuzzle(r, c, grid);

    displayPuzzle(r, c, grid);

    return 0;
}

void createPuzzle(int r, int c, int boxes [r][c])
{
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            boxes[i][j] = 1;
        }
    }
}

void displayPuzzle(int r, int c, int boxes [r][c])
{
    printf("-------------------------------------------------------\n");

    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            printf("|  ?  ");
        }

        printf("|");

        printf("\n");
        
        printf("-------------------------------------------------------\n");
    }
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
