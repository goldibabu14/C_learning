#include<stdio.h>
int main()
{
    /*int arr[]={1,2,3,4,5,6};
    int size= sizeof(arr)/sizeof(arr[2]);
    printf("%d", size);*/

    int i,n,arr[100],revarr[100],j;
    printf("Enter number of elements in an array:");
    scanf("%d",&n);
    printf("Enter elements\n");
    for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
    for(i=n-1,j=0;i>=0;i--,j++)
        {
            revarr[j]=arr[i];
        }
    printf("Original elements:\n");
    for(i=0;i<n;i++)
        {
            printf("%d\t",arr[i]);
        }
    printf("\nElements of reversed array:\n");
    for(i=0;i<n;i++)
        {
            printf("%d\t",revarr[i]);
        }
    

    
    
}