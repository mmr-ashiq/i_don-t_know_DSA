#include<stdio.h>
int main()
{
    int a[10],n,i,new_value;
    printf("How many numbers you wanna add to array? ");
    scanf("%d",&n);
    printf("Enter value for array: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the value for insert at last index: ");
    scanf("%d",&new_value);
    printf("Before insertion: ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    a[n]=new_value;
    printf("\nAfter insertion: ");
    for(i=0;i<=n;i++)
        printf("%d ",a[i]);
    return 0;
}
