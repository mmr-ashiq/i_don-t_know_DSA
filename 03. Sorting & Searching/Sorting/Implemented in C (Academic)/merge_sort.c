/* Merge sort algorithm --
1.Let's create an array
2.If the array contains one or less elements, then the array is already sorted
3.place the first half elements of the array called [A] in the left array. and merge the left array
4.place the first Second elements of the array called [A] in the right array. and merge the right array
5.merge left and right array both

this also called as divide and conquer.
*/
#include<stdio.h>

//Merge [A] array
//left- is the first index of elements
//right- is the last index of elements
void merge_sort(int A[], int left,int right){
    if(left >= right){
        //if this condition is true then we can say this array is already sorted.
        //so we return from function.

        return;
    }

    //as we need to split the array, so we will find the middle index.
    //first half of the array will be left to mid.
    //Second half of the array will be mid+1 to right.

    int mid = left + (right - left) / 2;

    //lets call merge_sort function and merge first half of the [A] array (A[left] to A[right])
    merge_sort(A, left, right);

    //lets call merge_sort function and merge second half of the [A] array (A[mid+1] to A[right])
    merge_sort(A, mid+1, right);

    //now merge first array (A[left] to A[mid]) and second array (A[mid+1] to a[right).
    /*Here we are dividing the A-array into two parts by indexing
    [A] array left, middle, right instead of creating two separate arrays.*/
    merge(A, left, mid, right);

}

void merge(int A[], int left, int mid, int right){
    int i;
    int index_a, index_l, index_r;
    int size_left, size_right;

    size_left = mid - left + 1;
    size_right = right - mid;

    int L[size_left], R[size_right];

    //Copy the elements from A [left] to A [mid] in the [L] array
    for(i = 0; i < size_left; i++){
        L[i] = A[left + i];
    }

    //Copy the elements from A [mid+1] to A [right] in the [R] array
    for(i = 0; i< size_right; i++){
        R[i] =  A[mid + 1 + i];
    }

    index_l = 0;
    index_r = 0;

    for(index_a = left; index_l < size_left && index_r <size_right; index_a++){
        if(L[index_l] < R[index_r]){
            A[index_a] = L[index_l];
            index_l += 1;
        }else{
            A[index_a] = R[index_r];
            index_r += 1;
        }
    }

    while(index_l < size_left){
        A[index_a] = L[index_l];
        index_l += 1;
        index_a += 1;
    }

    while(index_r < size_right){
        A[index_a] = R[index_r];
        index_r += 1;
        index_a += 1;
    }
}

int main(){

    int i, n;
    scanf("%d",&n);
    int A[n];
    for(i = 0; i < n; i++){
        scanf("%d", &A[i]);
    }

    merge_sort(A, 0, n);

    for(i = 0; i<= n; i++){
        printf("%d ", A[i]);
    }

    printf("\n");

}

/*
Time complexity of merge sort is O(n log n).
merge sort algorithm takes extra space.
merger sort is useful linked list(don't take extra space) and when given data or input size is huge.
*/
