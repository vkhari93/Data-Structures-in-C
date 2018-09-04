#include<stdio.h>
#include<stdlib.h>

int queu[100],last=0,first = 0,value;
void Enque()
{
    if (last < 100)
    {
        printf("Please enter element to be inserted in Queue\n");
        scanf("%d",&value);
        queu[last] = value;
        last++;
        printf("\n");
    }
    else
    {
        printf("Queue is Full\n");
    }
}

void Display()
{
    if (last == 0 || first==last)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        printf("Elements in Queue are:\t");
        for(int i=first;i<last;i++)
        {
            printf("%d ",queu[i]);
        }
        printf("\n");
    }
}

void Deque()
{
    if (last == 0)
    {
        printf("Queue is Empty\n");
        return;
    }
    if(first == last)
    {
        printf("Queue is Empty\n");
        first = last = 0;
        return;
    }
    else
    {
        printf("Element Removed:\t %d\n",queu[first]);
        queu[first] = '\0';
        first++;
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
