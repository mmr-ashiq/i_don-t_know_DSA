package com.company;

public class ExponentialSearch {

    public int binarySearch(int[] array, int target) {

        return binarySearch(array, target, 0, array.length - 1);
    }

    private int binarySearch(
            int[] array, int target, int left, int right) {

        if (right < left)
            return -1;

        int middle = (left + right) / 2;

        if (array[middle] == target)
            return middle;

        if (target < array[middle])
            return binarySearch(array, target, left, middle - 1);

        return binarySearch(array, target, middle + 1, right);
    }

    public int exponentialSearch(int[] array, int key) {
        int bound = 1;
        while (bound < array.length && array[bound] < key)
            bound *= 2;

        int left = bound / 2;
        int right = Math.min(bound, array.length - 1);
        return binarySearch(array, key, left, right);

    }
}
