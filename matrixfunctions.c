#include <stdio.h>

int** transpose(int [][100] ,int );
void input(int [][100] ,int* );
void output(int [][100] ,int );

int main()
{
    int mat[100][100]={0};
    int mat_size;

    input(mat,&mat_size);

    printf("The input array is \n");
    output(mat,mat_size);


    printf("Transpose matrix\n");
    output(transpose(mat,mat_size),mat_size);

    return 0;
}
int** transpose(int m[][100], int size)
{
    int i,j,temp;
    for(i=0;i<size;i++)
        for(j=0;j<i;j++)
        {
            temp = m[i][j];
            m[i][j] = m[j][i];
            m[j][i] = temp;
        }
    return m;
}

void input(int m[][100],int* size)
{
    printf("Enter the size of the matrix.\n");
    scanf("%d",size);
    int i,j;
    printf("Enter the elements of the matrix.\n");
    for(i=0;i<*size;i++)
        for(j=0;j<*size;j++)
            scanf("%d",&m[i][j]);

}

void output (int m[][100],int size)
{
    printf("The %d X %d matrix is\n",size,size);
    int i,j;
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
            printf("%d ",m[i][j]);

        printf("\n");
    }
}
