#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;
NODE *top=0;

void push();
void pop();
void peek();
void Display();

int main()
{
    int choice,p_value;
    int operation = 1;
    printf("\t\t\tstack using linked list\n");
    printf("\t\t\t-----------------------\n");
    while(operation)
    {
        printf("\n1.push\n");
        printf("2.pop\n");
        printf("3.peek\n");
        printf("4.Display\n");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
        system("cls");
        switch(choice)
        {
        case 1:
        {
            printf("Enter a value for push: ");
            scanf("%d",&p_value);
            push(p_value);
            break;
        }
        case 2:
        {
            pop();
            break;
        }
        case 3:
        {
            peek();
            break;
        }
        case 4:
        {
            Display();
            break;
        }
        fflush (stdin);
        printf ("Do you want to continue(Type 0 or 1)?\n");
        scanf("%d",&operation);
        }
    }
}


void push(int x)
{
    NODE *new_node;
    new_node=(NODE*)malloc(sizeof(NODE));
    new_node -> data = x;
    new_node -> next = top;
    top = new_node;
}

void pop()
{
    NODE *temp;
    temp = top;
    if(top == 0)
        printf("\nstack or list is empty\n");
    else
    {
        printf("pop element is %d",top->data);
        top = top->next;
        free(temp);
    }
}

void peek()
{
    if(top == 0)
        printf("\nstack or list is empty\n");
    else
    {
        printf("Top element is %d",top->data);
    }
}

void Display()
{
    NODE *temp;
    temp = top;
    if(top == 0)
        printf("\nstack/list is empty\n");
    else
    {
        while(temp != 0)
        {
            printf("[%d]  [%d]\n",temp, temp->data);
            temp = temp->next;
        }
        //printf("[NULL]");
    }
}
