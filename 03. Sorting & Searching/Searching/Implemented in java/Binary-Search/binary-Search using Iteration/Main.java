package com.company;

public class Main {

    public static void main(String[] args) {

        int[] unsortedArray = {1, 2, 3, 5, 6, 7, 8, 9, 10};
        var BinarySearch = new BinarySearch();
        var index = BinarySearch.binarySearch(unsortedArray, 5);
        System.out.println(index);


    }

    /*Time complexity of Binary Search :
        Best Case: O(1)
        Worst Case: O(log n)
     */

    /*Space Complexity of Binary Search :
        Using Recursion: O(long n)
        Using Iteration: O(1)
     */
}
