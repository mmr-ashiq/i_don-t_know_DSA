package com.company;

public class LinearSearch {
    public int linearSearch(int[] array, int key) {
        for (var i = 0; i < array.length; i++){
            if(array[i] == key)
                return i;
        }
        return -1;
    }
}
