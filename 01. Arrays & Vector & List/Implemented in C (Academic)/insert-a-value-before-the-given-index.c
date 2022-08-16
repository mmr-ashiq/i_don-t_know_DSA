/*
  insert new value at given index before, if searching value found.
  this code is just for practice academic purpose
*/

#include<stdio.h>
int main()
{
    int a[10],n,i,new_value,new_value_replace,new_index=-1;
    printf("how many elements you want to add: ");
    scanf("%d",&n);
    printf("Enter %d elements:",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("so the elements in the array look like:");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\nEnter the element that you want to search:");
    scanf("%d",&new_value);
    for(i=0;i<n;i++)
    {
        if(a[i]==new_value)
        {
            new_index=i;
            printf("Element found at index no %d",i);
            printf("\nwhat value you want to replace before:");
            scanf("%d",&new_value_replace);
            for(i=n;i>new_index;i--)
            {
                a[i]=a[i-1];
            }
            a[i]=new_value_replace;
            break;
        }
    }
    if(new_index==-1)
        printf("\nElement not found");

    printf("\nAfter replacing the array are:");
    for(i=0;i<n+1;i++)
        printf("%d ",a[i]);

}
