#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;
int main()
{
    int choice = 1;
    NODE *head,*new_node,*temp;
    head=0;
    while(choice)
    {
        new_node=(NODE*)malloc(sizeof(NODE));
        printf("Enter data: ");
        scanf("%d",&new_node->data);
        new_node->next=0;
        if(head==0)
            head=temp=new_node;
        else
        {
            temp->next=new_node;
            temp=new_node;
        }
        temp->next=head;
        printf("do you want to continue?(0/1):");
        scanf("%d",&choice);
    }
    //display
    int count = 1;
    printf("\nstatus of the circular linked list is:\n");
    if(head==0)
    {
        printf("linked list empty");
    }
    else
    {
        temp = head;
        printf("head = [%d] \n",temp);
        while (temp->next != head)
        {
            printf("node no %d = [%d]\t[%d] \n",count,temp->data,temp->next);
            temp = temp->next;
            count++;
        }
        //count++;
        printf("node no %d = [%d]\t[%d] \n",count,temp->data,head);

    }

}
