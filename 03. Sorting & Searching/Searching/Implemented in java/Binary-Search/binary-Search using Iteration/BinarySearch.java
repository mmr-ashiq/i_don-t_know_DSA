package com.company;

public class BinarySearch {

    public int binarySearch(int[] array, int key) {
        var left = 0;
        var right = array.length - 1;

        while (left <= right) {
            var middle = (left + right) / 2;
            if (array[middle] == key)
                return middle;
            if (key < array[middle])
                right = middle - 1;
            else
                left = middle + 1;
        }
        return -1;
    }
}
