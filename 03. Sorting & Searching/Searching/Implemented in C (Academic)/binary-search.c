/*binary serch will just applicable when elements are sorted.
if not then we need to sort element, then only binary search will work
*/

#include<stdio.h>
int main()
{
    int i,n,a[20],j,swap,search,min,max,mid;
    printf("Enter array size: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    //bubble sort
    for(i=1;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(a[j]>a[j+1])
            {
                swap=a[j];
                a[j]=a[j+1];
                a[j+1]=swap;
            }
        }
    }
    printf("After sorted:");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);

    //binary search
    printf("\nEnter element for search:");
    scanf("%d",&search);
    min=0;
    max=n-1;
    mid=(min+max)/2;
    while(min<=max)
    {
        if(a[mid]==search)
        {
            printf("found at index no %d",mid);
            break;
        }
        else if(a[mid]<search)
            min=mid+1;
        else
            max=mid-1;
        mid=(min+max)/2;
    }
    if(min>max)
        printf("Element not found");

}
