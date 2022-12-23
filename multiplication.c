#include<stdio.h>
 void main()
{
    int a[10][10],b[10][10],c[10][10],i,j,k;     printf("enter elements in matrix A: ");     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter elements in matrix B: ");     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

printf("product array is: \n ");     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {             c[i][j]=0;             for(k=0;k<3;k++)
            {
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
    }0
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }

}
