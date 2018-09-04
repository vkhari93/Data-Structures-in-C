#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
int top,input[10];
void push(int value)
{
input[++top] = value;
}
void pop()
{
if(top<0)
{
printf("Stack is empty.Please add elements\n");
}
input[--top];
}
void display()
{
printf("Array value: ");
for(int i=top;i>=0;i--)
printf("%d\t",input[i]);
printf("\n");
}

void main()
{
int x,option;
top = -1;
while(1)
{
printf("Select 1.Push 2.Pop 3.Display and 4.Exit\n");
scanf("%d",&option);
switch(option)
{
case 1:
if(top==9)
{
printf("Stack is full.No more values can be added");
display();
}
else
{
printf("Input value to be added in array\n");
scanf("%d",&x);
push(x);
}
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
printf("Please enter number from 1 to 4 !!\n");
}
}
};