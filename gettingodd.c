//using do while-cuz we have to take atleast 1 input from user
#include<stdio.h>
void main()
{
    int n;
    do
    {
        printf("Enter number:");
        scanf("%d",&n);
        printf("%d\n",n);
        if (n%2!=0)
        {
            break;
        }
        
    } while (1);
    printf("It's an odd number");
    
}