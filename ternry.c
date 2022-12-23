#include<stdio.h>
int ternerysearch(int a[],int key,int n){
   int si=0,ei=n-1;
    while(si<=ei){
        int mid1=si+(ei-si)/3;
        int mid2=ei-(ei-si)/3;
        if(key==a[mid1] ){
            return mid1;

        }else if ( key==a[mid2]){
            return mid2;
        }
        if(key<a[mid1]){
            ei=mid1-1;
        }else if(key>a[mid2]){
            si=mid2+1;
        }else{
            si=mid1+1;
            ei=mid2-1;
        }
    }
    return -1;
}
int main(){
    int n,key;
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enter the key");
    scanf("%d",&key);
    int x[n];

    printf("enter the elements");
    for (int i=0;i<n;i++){
        scanf("%d",&x[i]);
    }
    printf("%d is idx",ternerysearch(x,key,n));

    return 0;
}
