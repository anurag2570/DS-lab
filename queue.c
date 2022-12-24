#include<stdio.h>
#define size 10
typedef struct queue{
    int arr[size];
    int f;
    int r;
}queue_type;
int inint(queue_type *q){
    q->f=-1;
    q->r=-1;
}

void isempty(queue_type *q){
    if(q->f==-1 && q->r==-1){
        printf("underflow");

    }
}
void overflow(queue_type *q){
    if(q->f==0 &&q->r==size-1){
        printf("overflow");
    }
}

//enqueue
void enqueue(int data){
    if(){
        
    }
}
int main(){
    
    return 0;
}