#include<stdio.h>

/*void printhello(); // declaration/prototype

int main()
{
    printhello(); //function call
    return 0;
}

// funtion definition
void printhello(){
    printf("Hello World!!!");

}*/

/*void sum();
int main()
{
    sum();
    return 0;

}

void sum(){
    int a,b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    printf("Sum=%d", a+b);
}*/

//void name(); ---- no return value
//void name(int n);----- no return value but have paramter     
// int sum(int a,intb);------

int sum(int a , int b);
int main(){
    int a ,b;
    printf("Enter 1st number:");
    scanf("%d",&a);
    printf("Enter 2nd number:");
    scanf("%d",&b);

    int s= sum(a,b);
    printf("sum=%d",s);
    return 0;
}

int sum(int a , int b){
    return a+b;
}
