#include<stdio.h>
int main()
{
    int a[10],n,index,i,new_value1,new_value2;
    printf("How many numbers you wanna add to array? ");
    scanf("%d",&n);
    printf("Enter value for array: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter two value for insert index sequentially: ");
    scanf("%d %d",&new_value1,&new_value2);
    printf("Which index you wanna add vaule sequentialy: ");
    scanf("%d",&index);
    printf("Before insertion: ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);

    for(i=n-1;i>=index;i--)
    {
        a[i+1]=a[i];
    }
    for(i=n;i>index;i--)
    {
        a[i+1]=a[i];
    }
    a[index]=new_value1;
    a[index+1]=new_value2;
    printf("\nAfter insertion: ");
    for(i=0;i<n+2;i++)
        printf("%d ",a[i]);
    return 0;
}
