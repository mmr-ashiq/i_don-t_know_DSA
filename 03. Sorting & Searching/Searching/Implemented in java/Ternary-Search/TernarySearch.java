package com.company;

public class TernarySearch {

    public int ternarySearch(int[] array, int key){
        return ternarySearch(array,key,0,array.length-1);
    }


    private int ternarySearch(int[] array, int key, int left, int right) {

        if (left > right)
            return -1;

        int partitionSize = (right - left) / 3;
        int middle1 = left + partitionSize;
        int middle2 = right - partitionSize;

        if (array[middle1] == key)
            return middle1;

        if (array[middle2] == key)
            return middle2;

        if (key < array[middle1])
            return ternarySearch(array, key, left, middle1 - 1);

        if (key > array[middle2])
            return ternarySearch(array, key, middle2 + 1, right);

        return ternarySearch(array, key, middle1 + 1, middle2 - 1); //it's middle partition

    }

}
