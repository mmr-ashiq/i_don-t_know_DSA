package com.company;

import java.util.Arrays;

public class Main {

    public static void main(String[] args) {

        int[] unsortedArray = {5, 2, 3, 1, 9, 7, 6, 20, 4, 8};
        var giveMeSortedArray = new MergeSort();
        giveMeSortedArray.mergeSort(unsortedArray);
        System.out.println(Arrays.toString(unsortedArray));

    }

    /*
        Time Complexity of Merge Sort:
        Dividing: O(log n)
        Merging: O(n)

        Space Complexity of Merge Sort: O(n)
    */
}
