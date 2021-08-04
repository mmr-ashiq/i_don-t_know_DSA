package com.company;

public class JumpSearch {
    public int jumpSearch(int[] array, int key) {
        int blockSize = (int) Math.sqrt(array.length);
        int start = 0;
        int next = blockSize;

        while (start < array.length && array[next - 1] < key) {
            start = next;

            next += blockSize;
            if (next > array.length)
                next = array.length;
        }

        for (var i = start; i < next; i++) {
            if (array[i] == key)
                return i;
        }
        return -1;
    }
}
