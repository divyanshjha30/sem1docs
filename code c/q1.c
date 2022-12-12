#include <stdio.h>
int main()
{

    int i,j, a[10]={1,2,3,4,5};
    int count, key;


    //printf("enter how may numbners you want to enter:\n");
    //scanf("%d",&count);
    
    printf("enter array numbers");
    fflush(stdin);
    for(i=5;i<11;i++)
    scanf("%d", &a[i]);

    printf("the new array is:\n");
    for(j=0;j<=20;j++)
    printf("%d ",a[j]);
    printf("enter the number yo want to search:\n");
    scanf("%d",&key);
    
    
    
    return 0;
}