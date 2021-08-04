package com.company;

import java.util.Arrays;

public class Main {

    public static void main(String[] args) {

        int [] unsortedArray = {6,9,8,2,3,1,10,7,5};
        var giveMeSortedArray = new BubbleSort();
        giveMeSortedArray.sort(unsortedArray);
        System.out.println(Arrays.toString(unsortedArray));

    }

    /*Time complexity of Bubble Sort : 
    Best Case: O(N)- Linear
    Worst Case: O(N ^ 2)- Quadratic 
    */
}
