#include<stdio.h>
int main()
{
    int age;
    printf("enter age:");
    scanf("%d", &age);
    age>=18?printf("can vote"):printf("cant vote");
}