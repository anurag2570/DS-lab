#include<stdio.h>
int main()
{
    int a [100],i,n,t;
    printf("enter the value of n");
    scanf("%d",&n);
    int j=n-1;
    printf("Enter the element");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    i=0;
    while(i<j)
    {
        t=a[j];
        a[j]=a[i];
        a[i]=t;
        i=i+1;
        j=j-1;
    }
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}
