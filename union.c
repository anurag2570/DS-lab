#include<stdio.h>
int main()
{
   int A[20],B[20],C[20],k=0,i,j,m,n,flag,c=0;
   m = 5;                           //Setting limits for A and B elements
   n = 6;
   printf("Enter A elements:");
   for(i=0; i<m; i++)
   {
       scanf("%d",&A[i]);              //Input for A elements
   }
   printf("Enter B elements:");
   for(i=0; i<n; i++)
   {
       scanf("%d",&B[i]);              //Input for B elements
   }
   for(i=0; i<m; i++ )
   {
       C[k] = A[i];                //Copying A elements in C
       k++;
   }
   for(i=0; i<n; i++)
   {
      for(j=0; j<m; j++)
      {
          flag = 0;
          if(B[i] == C[j])         //Checking B element don't repeat in C
          {
              flag = 1;
              c++;
              break;
          }
      }
      if(flag == 0)
      {
          C[k] = B[i];                //Copying B elements in C
          k++;
      }
   }



   for(j=0; j< (n+m)-c; j++)
   {
       printf(" %d ",C[j]);        //Printing C[i] from B
   }
}
