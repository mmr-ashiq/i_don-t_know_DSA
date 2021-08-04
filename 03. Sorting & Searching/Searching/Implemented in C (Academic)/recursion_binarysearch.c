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
        //2 4 6 8 10 12 15 ; S=4
        if(a[i]==s)
        {
            new_index=i;
            for(i=new_index+2;i<n-1;i++)
            {
                a[i]=a[i+1];
            }
            for(i=0;i<n-2;i++)
                printf("%d ",a[i]);
        }

        //2 4 6 8 10 12 15 ; S=10
        else if(a[n-3]==s)
        {
            new_index=a[n-3];
            for(i=0;i<n-1;i++)
                printf("%d ",a[i]);
        }

        //2 4 6 8 10 12 15 ; S=15
        else if(a[n-1]==s)
        {
            new_index=a[n-1];
            for(i=0;i<n-1;i++)
                printf("%d ",a[i]);
            printf(",No Double Next Found!");
        }

        //2 4 6 8 10 12 15 ; S=12
        else if(a[n-2]==s)
        {
            new_index=a[n-2];
            for(i=0;i<n-1;i++)
                printf("%d ",a[i]);
            printf(",No Double Next Found!");
        }
    }
    if(new_index==-1)
        printf(",%d doesn't exist in this array!",s);

    return 0;
}
