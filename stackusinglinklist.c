#include<stdio.h>
#include<malloc.h>

typedef struct node{
    int data;
   struct node* next;
}node;
node* top=NULL;
void push(int val){
    node* Newnode =(node*)malloc(sizeof(node*));
    Newnode->data=val;
    if(top==NULL){
        top=Newnode;
        top->next=NULL;
    }else{
        Newnode->next=top;
        top=Newnode;
    }

}

int pop(){
    node* temp=NULL;
    if(top==NULL){
        printf("no element in stack");
        return -1;
    }else{
        temp=top;
        int t=top->data;
        top=top->next;
        temp->next=NULL;
        free(temp);
        return t;
    }
}
void display(){
    while(top!=NULL){
        printf("%d \n",pop());
    }
}
int main(){
    push(7);
    push(6);
    push(15);
    push(95);
    push(70);
    push(60);
    push(105);
    push(595);
    display();
    return 0;
}
