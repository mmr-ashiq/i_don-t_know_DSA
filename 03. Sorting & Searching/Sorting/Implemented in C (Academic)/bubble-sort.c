#include<stdio.h>
int main()
{
    int a[20],n,i,j,swap;
    printf("Enter total number of Elements: ");
    scanf("%d",&n);
    printf("Enter %d Elements: ",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Entered Elements are: ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);

    //bubble sort code for ascending order

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<(n-1-i);j++)
        {
            if(a[j]>a[j+1])
            {
                swap=a[j];
                a[j]=a[j+1];
                a[j+1]=swap;
            }
        }
    }
    printf("\nAfter Sorting the Elements are(ascending order): ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}
