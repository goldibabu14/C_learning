#include<stdio.h>
void main()
{
    int n;
    do
    {
        printf("Enter a number:");
        scanf("%d",&n);
        if(n%7==0)//if not then the loop will be infinite as while condition is 1 = true
            {break;}
    } while (1);//1---true
    printf("%d is a multiple of 7",n);
    
}