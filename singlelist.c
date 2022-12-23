/* Single linked list Operations*/
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};

struct node *start = NULL;
int len;

void append(void);
void add_at_begin(void);
void add_at_after(void);
int length(void);
void display(void);
void delete (void);
void reverse_list();
int linear_search(void);
void main()
{
    int ch;
    while (1)
    {
        printf("Single linked list operations:\n");
        printf("1.Append\n");
        printf("2.Add_At_begin\n");
        printf("3.Add_At_after\n");
        printf("4.Length\n");
        printf("5.Display\n");
        printf("6.Delete\n");
        printf("7.Reverse\n");
        printf("8.linear_search\n");
        printf("9.Quit\n");

        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            append();
            break;
        case 2:
            add_at_begin();
            break;
        case 3:
            add_at_after();
            break;
        case 4:
            len = length();
            printf("Length: %d\n\n", len);
            break;
        case 5:
            display();
            break;
        case 6:
            delete ();
            break;
        case 7:
            reverse_list();
            break;
        case 8:
             linear_search();
             break;
        case 9:
            exit(1);
            break;
        default:
            printf("Invalid input\n\n");
            break;
        }
    }
}
void append()
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    printf("Enter node data:\n");
    scanf("%d", &temp->data);
    temp->link = NULL;
    if (start == NULL)
    {
        printf("List is empty:\n");
        start = temp;
    }
    else
    {
        struct node *ptr;
        ptr = start;
        while (ptr->link != NULL)
        {
            ptr = ptr->link;
        }
        ptr->link = temp;
    }
}
int length()
{
    int count = 0;
    struct node *temp;
    temp = start;
    while (temp != NULL)
    {
        count++;
        temp = temp->link;
    }
    return count;
}
void display()
{
    struct node *temp;
    temp = start;
    if (temp == NULL)
    {
        printf("List Is Empty\n");
    }
    else
    {
        while (temp != NULL)
        {
            printf("%d-->", temp->data);
            temp = temp->link;
        }
        printf("\n\n");
    }
}
void add_at_begin(void)
{

}
void add_at_after(void)
{
}
void delete (void)
{
}
void reverse_list()
{


}

int linear_search(void){
    struct node *temp;
    int ele ,count=0,flag=0;
    temp=start;
    if(temp==NULL){
        printf("List is empty:\n");
    }
    else{
        printf("Enter the node value to be checked:\n");
        scanf("%d",&ele);
        while (temp!=NULL)
        {
            if(temp->data == ele)
            {
                printf("Node found at location %d :\n",count+1);
                 flag=1;

            }
            count++;
            temp=temp->link;
        }
        if(flag==0){
            printf("Node value not found:\n");
        }

    }
}
void add_at_begin
