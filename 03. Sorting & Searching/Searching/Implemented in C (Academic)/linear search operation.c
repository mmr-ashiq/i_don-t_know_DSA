#include<stdio.h>
int main()
{
    int i,n,new_value,new_index=-1,a[10]={};
    printf("how many elements you want to store: ");
    scanf("%d",&n);
    printf("Enter %d elements: ",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Elements in the array now: ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\nEnter the element that you want to search: ");
    scanf("%d",&new_value);
    for(i=0;i<n;i++)
    {
        if(a[i]==new_value)
        {
            new_index = i;
            printf("Element found at index no %d",i);
            break;
        }
    }
    if(new_index==-1)
        printf("Element not found");
}
