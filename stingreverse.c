#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100]={0};
    char str2[100]={0};

    printf("Enter the input string.\n");
    gets(str1);

    int i,slen=0;

    while(str1[slen] !='\0')
    {
        slen++;
    }
    for(i=0;i<slen;i++)
        str2[i]=str1[slen-1-i];

    for(i=0;i<slen;i++)
        if(str1[i]!=str2[i])
        {
            printf("NOT A PALANDROME\n");
            break;
        }

    if(i==slen)
            printf("PALANDROME\n");
    return 0;
}
