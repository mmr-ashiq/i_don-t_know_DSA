#include<stdio.h>
#include<stdlib.h>
struct queue
{
    int data;
    struct queue *next;
};
typedef struct queue NODE;
NODE *front=0;
NODE *rear=0;

void enqueue();
void dequeue();
void peek();
void Display();
int main()
{
    int choice,ele,option=1;
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
            printf("\tEnter element for enqueue: ");
            scanf("%d",&ele);
            enqueue(ele);
            break;
        }
        case 2:
        {
            dequeue();
            break;
        }
        case 3:
        {
            printf("\tQueue status: \n");
            Display();
            break;
        }
        case 4:
        {
            peek();
            break;
        }
        default:
            printf("\tWrong option choose");
            break;

        }
        printf("\tdo you want to continue?(0/1): ");
        scanf("%d",&option);
        system("CLS");
    }

}

void enqueue(int x)
{
    NODE *new_node;
    new_node=(NODE*)malloc(sizeof(NODE)); //dynamic memory allocation
    new_node->data = x;
    new_node->next=0;
    if(front == 0)
    {
        front = rear = new_node;
        rear->next = front;
    }
    else
    {
        rear->next = new_node;
        rear = new_node;
        rear -> next = front;
    }
}
void dequeue()
{
    NODE *temp;
    temp = front;
    if(front == 0 && rear == 0)
        printf("\tQueue is empty\n");
    else if(front == rear)
    {
        front == rear == 0;
        free(temp);
    }
    else
    {
        front = front->next;
        rear->next = front;
        free(temp);
    }

}
void Display()
{
    NODE *temp;
    temp=front;
    if(front==0)
        printf("\tQueue is empty\n");
    else
    {
        while(temp->next != front)
        {
            printf("\t%d ",temp->data);
            temp = temp->next;
        }
        printf("\t%d ",temp->data);
        printf("\n");
    }
}
void peek()
{
    if(front==0)
        printf("\tQueue is empty\n");
    else
    {
        printf("\t%d \n",front->data);
    }
}
