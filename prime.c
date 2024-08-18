#include<stdio.h>
void main()
{
    int a,i=2,prime=1;
    printf("enter a number=");
    scanf("%d",a);
    if (a<=1)
    {
        printf("not prime");
    }
    
    while (i< a)
    {
        if (a%i==0)
        {
            prime=0;
            break;
        }
        ++i;
    }
    if(prime)
        printf(" prime");
    else
        printf("not prime");
    

}
