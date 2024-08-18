#include<stdio.h>
int main()
{
    char a[100],b[100];
    int i,j,n=0,f;
    printf("Enter string");
    scanf("%s", a);
    for(i=0;a[i]!='\0')
        {n++;}
    for(i=n-1;i>=0,i--)
        {b[j]=a[j];
         j++;
        }
    rev[j]='\0';
    printf("reversed string is %s",b);
    if(a==b)
        {
            printf("palindrome");
            f=1;
        }
    if(f!=1)
        printf ("not palindrome");
}