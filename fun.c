#include<stdio.h>  
void swap(int ,int);
int main()
    {
        int a,b;
        printf("Enter two numbers:");
        scanf("%d %d",&a,&b);
        printf("before swappping, a=%d and b=%d\n",a,b);
        swap(a,b);
        printf("After swapping, a=%d and b=%d",a,b);
        return 0;

    }
    void swap(int a,int b){
        int temp=a;
        a=b;
        b=temp;
        printf("value of a=%d and b=%d",a,b);
    }