#include<stdio.h>
void main()
{
    int a[10][10],i,j; printf("enter elements in matrix A: ");     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);}}     printf("trnspose of matrix is: \n ");     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
}
