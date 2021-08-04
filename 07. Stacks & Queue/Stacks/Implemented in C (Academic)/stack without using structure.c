#include<stdio.h>
//#include<stdlib.h>
#define max 10

int top=-1;
int stk[max];
void push();
void display();
void pop();
void peek();
int main()
{
    int choice,option;
    printf("\t\t\tStack operation\n");
    printf("\t\t\t---------------\n");
    while(option)
    {
        printf("\t\t1.push\n");
        printf("\t\t2.display\n");
        printf("\t\t3.pop\n");
        printf("\t\t4.peek\n");
        printf("\n\t\tEnter the choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            push();
            break;
        case 2:
            display();
            break;
        case 3:
            pop();
            break;
        case 4:
            peek();
            break;
        default:
            printf("\n\t\tWrong choice\n");
            break;
        }
        fflush(stdin);
        printf("\n\t\tDo you continue ?press 1 or 0: ");
        scanf("%d",&option);
    }
}

void push()
{
    int num;
    if(top==max-1)
    {
        printf("\t\tthere is no space (Overflow)\n");
    }
    else
    {
        printf("\t\tEnter the element to be pushed:  ");
        scanf("%d",&num);
        top=top+1;
        stk[top]=num;
    }

}
void display()
{
    if(top==-1)
    {
        printf("\t\tthe stack is empty\n");
    }
    else
    {
        printf("\t\tThe element of stack is:\n");
        for(int i=top; i>=0; i--)
            printf("\t\t%d\n",stk[i]);
    }
}
void pop()
{
    int num;
    if(top==-1)
    {
        printf("\t\tthe stack is empty(Underflow)\n");
    }
    else
    {
        num=stk[top];
        printf("\t\tpoped element is %d\n",stk[top]);
        top=top-1;
    }
}
void peek()
{
    if(top==-1)
    {
        printf("\t\tthe stack is empty\n");
    }
    else
        printf("\t\tthe top element is %d\n",stk[top]);
}
