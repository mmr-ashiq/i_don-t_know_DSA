#include <stdio.h>

int main()
{
    int i,n,index,array_element,element_for_insert,a[10];
    printf("how many element you wanna add to array: ");
    scanf("%d",&array_element);
    printf("Enter value for array: ");
    for(i=0;i<array_element;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("which index you wanna insert: ");
    scanf("%d",&index);
    printf("Enter element for insert: ");
    scanf("%d",&element_for_insert);
    printf("Before insertion: \n");
    for(i=0;i<array_element;i++)
    {
        printf("%d ",a[i]);
    }
    for(i=array_element-1;i>=index;i--)
    {
        a[i+1]=a[i];
    }
    a[index]=element_for_insert;
    printf("\nAfter insertion: \n");
    for(i=0;i<=array_element;i++)
    {
        printf("%d ",a[i]);
    }
}
