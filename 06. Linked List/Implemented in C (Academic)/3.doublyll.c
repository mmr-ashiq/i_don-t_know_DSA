#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
typedef struct node NODE;

int main()
{
    int choice = 1;
    NODE *head,*new_node, *temp;
    head = 0;

    while(choice !=0)
    {
        new_node=(NODE*)malloc(sizeof(NODE));
        printf("Enter the data: ");
        scanf("%d",&new_node ->data);

        new_node ->prev=0;
        new_node ->next=0;

        if(head == 0)
        {
            head = temp = new_node;
        }
        else
        {
            temp ->next = new_node;
            new_node ->prev = temp;
            temp = new_node;
        }
        printf("do you want to continue?(0/1): ");
        scanf("%d",&choice);
    }

    //display
    int count = 1;
    temp = head;
    printf("\nstatus of the linked list is:\n");
    printf("head = [%d] \n",temp);
    while (temp != 0)
    {
        printf("node no %d = [%d]\t[%d]\t[%d] \n",count,temp->prev,temp->data,temp->next);
        temp = temp->next;
        count++;
    }
}
