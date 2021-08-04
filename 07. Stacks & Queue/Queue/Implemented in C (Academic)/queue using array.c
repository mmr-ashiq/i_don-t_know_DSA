#include<stdio.h>
#define N 5
int queue[N];
int front = -1;
int rear = -1;

void enqueue();
void dequeue();
void peek();
void Display();

int main()
{
    int choice,enqueue_value;
    int option = 1;
    printf("\t\t\tQueue using Array\n");
    printf("\t\t\t------------------\n");
    while (option =!0)
    {
        printf("\t\t\twhat you want to do:\n");
        printf("\t1.enqueue\n");
        printf("\t2.dequeue\n");
        printf("\t3.display\n");
        printf("\t4.peek\n");
        printf("\n\tEnter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
        {
            enqueue();
            break;
        }
        case 2:
        {
            dequeue();
            break;
        }
        case 3:
        {
            printf("\tQueue status: ");
            Display();
            break;
        }
        case 4:
        {
            peek();
            break;
        }
        default:
            printf("\tWrong option choose!");
            break;

        }
        printf("\tdo you want to continue?(0/1): ");
        scanf("%d",&option);
        system("CLS");
    }

}

void enqueue()
{
    if(rear == N-1)
        printf("\n\tQueue is Full\n");//overflow
    /*else if(front == -1 && rear == -1)
    {
        front == rear == 0;
        queue[rear] == x;
    }
    else
    {
        rear = rear + 1;
        queue[rear] = x;
    }*/
    else
    {
        int add_item;
        if (front == - 1)
        /*If queue is initially empty */
        front = 0;
        printf("Inset the element in queue : ");
        scanf("%d", &add_item);
        rear = rear + 1;
        queue[rear] = add_item;
    }
}

void dequeue()
{
    if(front == -1 && rear == -1)
        printf("\n\tQueue is empty\n");//underflow
    else if(front ==  rear)
    {
        front == rear == -1;
    }
    else
    {
        printf("\n\tdequeued element from the queue is %d",queue[front]);
        front = front + 1;
    }
}

void peek()
{
    if(front == -1 && rear == -1)
        printf("\n\tQueue is empty\n");
    else
    {
        printf("\n\tdata at front is %d",queue[front]);
    }
}

void Display()
{
    if(front == -1 && rear == -1)
        printf("\tQueue is empty\n");
    else
    {
        for(int i = front; i < rear + 1; i++)
            printf("\n\t%d ",queue[i]);
    }
}
