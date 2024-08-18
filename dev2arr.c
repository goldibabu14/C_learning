#include<stdio.h>
void main()
{
    int r,c,a[r][c];
    printf("Enter the order of matrix:");
    scanf("%d%d",&r,&c);
    printf("ENter elements");
    for(int i=0;i<r;i++)
        {   for(int j=0; j<c; j++)
                {
                    scanf("%d",&a[i][j]);
                }
        }
    for(int i=0; i<c;i++)
        {
            for(int j=0;j<r;j++)
                {
                    printf("Matrix%d\t",a[i][j]);
                    printf("\n");
                }
        }
}