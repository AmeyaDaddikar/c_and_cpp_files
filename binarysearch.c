#include <stdio.h>

int main()
{
    int arr[100],tot_elem,low,mid,high,i,j,temp;
    int srch_int;
    printf("Enter the total number of elements in the array.\n");
    scanf("%d",&tot_elem);

    printf("Enter the elements.\n");
    for(i=0;i<tot_elem;i++)
        scanf("%d",&arr[i]);

    for(i=0;i<tot_elem-1;i++)
        for(j=0;j<tot_elem-i-1;j++)
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
    printf("SORTED ARRAY\n");
    for(i=0;i<tot_elem;i++)
        printf("%d\n",arr[i]);

    printf("Enter the number to be searched.\n");
    scanf("%d",&srch_int);

    low=0;
    high=tot_elem;
    mid = (low + high)/2;
    while(low < mid)
    {
        mid = (low + high)/2;
        if(arr[mid] == srch_int)
        {
            printf("ELEMENT FOUND AT %d POSITION\n",mid+1);
            break;
        }
        else if(srch_int < arr[mid])
                high = mid ;
        else
                low = mid;
    }

    return 0;
}
