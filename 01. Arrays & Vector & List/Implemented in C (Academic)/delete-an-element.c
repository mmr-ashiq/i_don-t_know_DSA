#include <stdio.h>

int main()
{

      int n,i,pos,a[10];
      printf("how many element you want to store: ");
      scanf("%d",&n);
      printf("Enter these element: ");
      for(i=0;i<n;i++)

        scanf("%d",&a[i]);

      printf("which index you want to Delete: ");

      scanf("%d",&pos);

      for(i=pos;i<n;i++)

        a[i]=a[i+1];

      for(i=0;i<n-1;i++)

        printf("%d ",a[i]);

      return 0;

}
