#include<stdio.h>
int main()
{

    int a[10],n,i,new_value,new_index;

    printf("How many numbers you wanna add? ");

    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=0;i<n;i++)

        scanf("%d",&a[i]);
    printf("Before insertion: ");
    for(i=0;i<n;i++)

        printf("%d ",a[i]);

    printf("\nEnter the New value: ");

    scanf("%d",&new_value);

    printf("which index you wanna add? ");

    scanf("%d",&new_index);

    /* Make space for new array element by shifting to right */
    for(i=n; i>new_index; i--) //5 4 3 2 1
    {
        a[i] = a[i-1]; // arr[5]=a[4], arr[4]=a[3], arr[3]=a[2], arr[2]=a[1], arr[1]=a[0]
    }
    a[new_index]=new_value;

    printf("after insertion : ");

    for(i=0; i<=n; i++)

    {
        printf("%d ", a[i]);
    }

    return 0;
}
