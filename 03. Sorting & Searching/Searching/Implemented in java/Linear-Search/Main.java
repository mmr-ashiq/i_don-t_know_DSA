package com.company;

import java.util.Arrays;

public class Main {

    public static void main(String[] args) {

        int [] unsortedArray = {6,9,8,2,3,1,10,7,5};
        var LinearSearch = new LinearSearch();
        var index = LinearSearch.linearSearch(unsortedArray,7);
        System.out.println(index);



    }
     /*Time complexity of Linear Search :
        Best Case: O(1)
        Worst Case: O(n)
     */
}
