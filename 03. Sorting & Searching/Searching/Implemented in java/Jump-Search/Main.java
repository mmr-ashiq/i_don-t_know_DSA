package com.company;

public class Main {

    public static void main(String[] args) {

        int[] unsortedArray = {1, 2, 3, 5, 6, 7, 8, 9, 10};
        var JumpSearch = new JumpSearch();
        var index = JumpSearch.jumpSearch(unsortedArray, 5);
        System.out.println(index);


    }

    /*
        Time complexity of Jump Search: O(√n)
    */
}
