package com.company;

public class BinarySearch {

    public int binarySearch(int[] array, int key) {
        return binarySearch(array, key, 0, array.length - 1);
    }

    private int binarySearch(int[] array, int key, int left, int right) {

        if (right < left)
            return -1;

        int middle = (left + right) / 2;

        if (array[middle] == key)
            return middle;

        if (key < array[middle])
            return binarySearch(array, key, left, middle - 1);

        return binarySearch(array, key, middle + 1, right);

    }
}
