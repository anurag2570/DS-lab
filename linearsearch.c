#include <stdio.h>
int main()
{     int n,i,s,a[10];
    printf("\nEnter the size of an array: ");     scanf("%d",&n);
    printf("\nEnter the element in an array:");
    for(i=0;i<=n;i++)
    {
        scanf("%d",&a[i]);
         }
    printf("\nThe element of an array is:");
    for(i=0;i<=n;i++)     printf("%d",a[i]);     printf("\nEnter the search element:");     scanf("%d",&s);
    for(i=0;i<=n;i++)
    {         if(a[i]==s)
        {
        printf("\n%d is the position of element",i);
        }
    }
       return 0;
}
