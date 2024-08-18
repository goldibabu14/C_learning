#include<stdio.h>
void main()
{
    //loops can  be float or char also


    /*
    for (int i = 1; i < 11; i++)
    {
        printf("5x%d=%d\n",i,5*i);
    }*/


    //infinite loop- runs till computer memory is full

    //while loop-(declaration and initialisation should be made before; updation in body part)

    /*int i=1;
    while (i<=10)
    {
       printf("%d\n",i);
       i++;
    }*/

    // do while loop

    int i=5;
    do
    {
        printf("%d\n",i);
        i--;
    } while (i>=1);
    
}