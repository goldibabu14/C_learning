#include<stdio.h>
void main(){
    int r,c;
    printf("Enter order of matrix: ");
    scanf("%d%d", &r,&c);
    int mat[10][10], sparse[10][3];
    printf("Enter elements:\n ");
    int i,j;
    for ( i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
           printf("Enter element at(%d , %d):", i+1,j+1);
           scanf("%d",&mat[i][j]);
        }     
    }
    int k=0;

    for ( i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (mat[i][j]!=0)
            {
                sparse[k][0]=i;
                sparse[k][1]=j;
                sparse[k][2]=mat[i][j];
                k++;
            }
        }
    }
    printf("Sparse matrix:\n");
    printf("Row\tColumn\tValue\t\n");
    for ( i = 0; i < k; i++)
    {
        printf("%d\t%d\t%d\n",sparse[i][0], sparse[i][1], sparse[i][2]);
    }    
}