#include<stdio.h>
int main()
{
    int n,a[20],i,new_index=-1,s;
    printf("how many element you want to add in array: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("array looks like now: ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\nEnter an element for searching: ");
    scanf("%d",&s);
    for(i=0;i<n;i++)
    {
        if(a[i]==s)
        {
            new_index=i;
            for(i=new_index+2;i<n;i++)
            {
                a[i]=a[i+1];
            }
            for(i=0;i<n-2;i++)
                printf("%d ",a[i]);
        }
        else if(a[n-1]==s)
        {
            for(i=0;i<n;i++)
            {
                printf("%d ",a[i]);
            }

        }
        else if(a[n-2]==s)
        {
            for(i=0;i<n-1;i++)
            {
                printf("%d ",a[i]);
            }
            printf(", No double next found");
        }
    }
    if(new_index==-2)
    {
        printf(", %d doesn't exist in this array",s);
    }
    return 0;
}
