package com.mmrproduct;

import java.util.LinkedList;

public class Main {

    public static void main(String[] args) {

        LinkedList<String> countryNames = new LinkedList<String>();

        countryNames.add("Bangladesh");
        countryNames.add("America");
        countryNames.add("Canada");
        countryNames.add("Germany");
        countryNames.add("London");
        countryNames.add("Japan");
        countryNames.add(6,"India");
        countryNames.addFirst("Australia");
        countryNames.addLast("New Zealand");
        countryNames.remove("India");
        countryNames.remove(6);

        System.out.println(countryNames);
         
        /*
        for(String country : countryNames){

            System.out.println(country);

        }
        */
        
        System.out.println("Size of the linked-list: "+countryNames.size());
        
        System.out.println("First element: "+countryNames.getFirst());
        System.out.println("Last element: "+countryNames.getLast());

    }
}
