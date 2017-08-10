#include <stdio.h>
char msg[100] = "I LOVE YOU\n",0};
void input(int *x)
{
    scanf("%d",x );
    if(*x<5)
    {
        printf("Number less than 5\n");
        input(x);
    }
}
void output()
{
    int j=0;
    int k=0;
    while(j<11)
    {
    while(k++<10000000);
    printf("%c",msg[j++]);
    }
    k=0;
    while(k++<100000000);
    output();
}

int main()
{
    output();
    return 0;
}

