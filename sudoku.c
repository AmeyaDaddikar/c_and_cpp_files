#include <stdio.h>

int grid[9][9] = {0,0,0,0,0,0,0,0,0,
                  0,0,0,0,0,0,0,0,0,
                  0,0,0,0,0,0,0,0,0,
                  0,0,0,0,0,0,0,0,0,
                  0,0,0,0,0,0,0,0,0,
                  0,0,0,0,0,0,0,0,0,
                  0,0,0,0,0,0,0,0,0,
                  0,0,0,0,0,0,0,0,0,
                  0,0,0,0,0,0,0,0,0};

void editGrid(int arr[][9]);
void displayGrid(int arr[][9])
{
    int i,j;
    for(i=0;i<9;i++,printf("\n"))
        for(j=0;j<9;j++)
            printf("%d ",arr[i][j]);
}


int main()
{
        editGrid(grid);
        displayGrid(grid);
    return 0;
}
void editGrid(int arr[][9])
{
    int i,j;
    char opt;
    do
    {
        printf("Enter row and column number.\n");
        scanf("%d",&i);
        scanf("%d",&j);
        printf("Enter the element value\n");
        scanf("%d",&arr[i-1][j-1]);

        printf("Add another element to sudoku?\nEnter y or n\n");
        scanf("%c",&opt);
        scanf("%c",&opt);

    }while(opt == 'y');


}
