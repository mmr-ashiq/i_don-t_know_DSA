package com.company;

public class Main {

    public static void main(String[] args) {

        int[] unsortedArray = {1, 2, 3, 5, 6, 7, 8, 9, 10};
        var ExponentialSearch = new ExponentialSearch();
        var index = ExponentialSearch.exponentialSearch(unsortedArray, 8);
        System.out.println(index);


    }

    /*
        Time complexity of Exponential Search: O(log i)
    */
}
