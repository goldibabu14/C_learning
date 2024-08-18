#include<stdio.h>
int main()
{
   /* for (int i = 1; i < 6; i++)
    {
        if (i==3)
        {
            break;
        }
        printf("%d\n",i);
        
    }
    printf("END");*/

    for (int i = 1; i < 6; i++)
    {
        if (i==3)
        {
            continue;//loop will not stop , it will skip.
        }
        printf("%d\n",i);
        
    }
    printf("END");
    return 0;


}