#include <stdio.h>

int pow(int x, int y)
{
    if(y !=0)
        return x*pow(x,y-1);
    else
        return 1;
}

int main()
{
    int num1,num2;

    printf("Enter num1 and num2\n");
    scanf("%d%d",&num1,&num2);

    printf("ANSWER =%d \n",pow(num1,num2));

    return 0;
}
