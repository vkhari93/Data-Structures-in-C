#include<stdio.h>
#include<stdlib.h>

struct node
{
 int data;
 struct node *next;
}*first=NULL,*last=NULL;

void Enque()
{
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter element to be inserted\n");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if (first == NULL)
    {
        first = newnode;
    }
    else
    {
        last->next = newnode;
    }
    last=newnode;
}

void Display()
{
    if (first == NULL)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        struct node *temp;
        temp = (struct node*)malloc(sizeof(struct node));
        temp = first;
        printf("Elements are:\t");
        while(temp->next != NULL)
        {
            printf("%d ",temp->data);
            temp = temp->next;
        }
        printf("%d",temp->data);
        printf("\n");
    }
}

void Deque()
{
    if (first == NULL)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        struct node *temp;
        temp = (struct node*)malloc(sizeof(struct node));
        temp = first;
        printf("Element removed -> %d\n",first->data);
        first = first->next;
        free(temp);
    }
}
int main()
{
    while(1)
    {
        int option;
        printf("Please choose any one option from below:\n");
        printf("1. Insert Element in Queue\n2. Delete Element from Queue\n3. Display elements in Queue\n4. Exit\n");
        scanf("%d",&option);
        switch(option)
        {
        case 1:
            Enque();
            break;
        case 2:
            Deque();
            break;
        case 3:
            Display();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("Incorrect Option. Please Enter correct Option.\n");
        }
    }
}
