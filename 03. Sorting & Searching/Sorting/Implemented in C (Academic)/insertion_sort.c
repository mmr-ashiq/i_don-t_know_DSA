#include <stdio.h>
#include<stdlib.h>

void insertion(int a[],int n)
{
    int i,j,x;

    //loop for passes
    for(i=1; i<n; i++)
    {
        j=i-1;
        x=a[i];

        //for shifting element
        while(j>-1 && a[j]>x)
        {
            a[j+1]=a[j];
            j--;
        }

        //copy the element
        a[j+1]=x;
    }
}

int main()
{
    int a[]= {15,12,9,12,19,5,24,7,10,2};
    int n=10,i;

    //calling insertion function
    insertion(a,n);

    for(i=0; i<10; i++)
        printf("%d ",a[i]);
    printf("\n");

    return 0;

}
