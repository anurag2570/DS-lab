#include<stdio.h>
#include<math.h>
int min(int a,int b){
    if (b>a){
        return a;
    }else
    return b;


}
int jumpsearch(int arr[],int n,int key){
    int step=sqrt(n);
    while(arr[min(n,step)-1]<key){
        int prev = step;
        step += sqrt(n);
        if (prev >= n)
            return -1;
    }

    }

}
int main(){
    
    return 0;
}