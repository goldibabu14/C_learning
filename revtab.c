#include<stdio.h>
void main()
{
    int n,i;
    printf("Enter number:");
    scanf("%d", &n);

    for ( i = 10; i >=1 ; i--)
    {
        printf("%d x %d=%d\n",n,i,n*i);
    }
    
}