#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
struct node
{
int data;
struct node *next;
}*top = NULL;
void push()
{
struct node *newnode;
newnode = (struct node*) malloc (sizeof(struct node));
printf("Enter value to be added in stack\n");
scanf("%d",&newnode->data);
if(top == NULL)
newnode->next = NULL;
else
newnode->next = top;
top = newnode;
}
void pop()
{
struct node *temp;
temp = (struct node*)malloc(sizeof(struct node));
if(top == NULL)
printf("Stack is empty\n");
else
{
temp = top;
printf("Element deleted from stack %d\n",temp->data);
top = temp -> next;
free(temp);
}
}
void display()
{
if(top == NULL)
printf("Stack is empty\n");
else
{
struct node *temp1;
printf("Stack contains elements: ");
temp1 = top;
while(temp1 -> next != NULL)
{
printf(" %d",temp1->data);
temp1 = temp1->next;
}
printf(" %d\n",temp1->data);
}
}
int main()
{
while(1)
{
int value;
printf("Enter \n1 for Push.\n2 for Pop.\n3 for Display.\n4 for exit.\n");
scanf("%d",&value);
switch(value)
{
case 1:
push();
break;
case 2:
pop();
break;
case 3:
display();
break;
case 4:
exit(0);
default:
printf("Please enter correct option\n");
break;
}
}
}
