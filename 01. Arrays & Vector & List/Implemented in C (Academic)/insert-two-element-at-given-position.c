#include <stdio.h>
int main()
{
    int arr[10];
    int i, size, num1,num2, pos1,pos2;

    printf("Enter size of the array : ");
    scanf("%d", &size);

    /* Input elements in array */
    printf("Enter elements in array : ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    /* Input new element and position to insert */
    printf("Enter new element's to insert : ");
    scanf("%d %d", &num1, &num2);
    printf("Enter the element's position : ");
    scanf("%d %d", &pos1,&pos2);

    /* If position of element is valid or not */
    if(pos1 > size+1 || pos1 <= 0)
    {
        printf("Invalid position! Please enter position between 1 to %d", size);
    }
    else
    {
        /* Make space for new array element by shifting to right */
        for(i=size; i>=pos1,i>=pos2; i--)
        {
            arr[i] = arr[i-1];
            arr[i+1] = arr[i-1];  
        }
        /* Insert new element at given position and increment size */
        arr[pos1-1] = num1;
        size++;
        arr[pos2-1] = num2;
        size++;

        /* Print array after insert operation */
        printf("Array elements after insertion : ");
        for(i=0; i<size; i++)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
