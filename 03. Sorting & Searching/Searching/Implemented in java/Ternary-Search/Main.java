package com.company;

public class Main {

    public static void main(String[] args) {

        int[] unsortedArray = {1, 2, 3, 5, 6, 7, 8, 9, 10};
        var TernarySearch = new TernarySearch();
        var index = TernarySearch.ternarySearch(unsortedArray, 5);
        System.out.println(index);


    }

    /*
        Time complexity of Ternary Search : O(log3 n).
        Binary Search is Faster then Ternary Search.
    */
}
