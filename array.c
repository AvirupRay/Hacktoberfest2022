#include <stdio.h>
void main()
{
    int i,arr[8];
    printf("Enter a no.");
    for(i=0;i<8;i++)
        scanf("%d",&arr[i]);

    printf("The array is:\n");
    for(i=0;i<8;i++)
        printf("%d ",arr[i]);
}
