package com.mmrproduct;

import java.util.LinkedList;

public class studentListDemo {
    public static void main(String[] args) {
        //student linked-list
        LinkedList<Student> list = new LinkedList<Student>();

        //student create
        Student s1 = new Student(101,"Rahim","Ten");
        Student s2 = new Student(102,"Jhon","Eleven");
        Student s3 = new Student(103,"Cena","Nine");
        Student s4 = new Student(104,"Roman","Eight");

        //adding student to the student-list
        list.add(s1);
        list.add(s2);
        list.add(s3);
        list.add(s4);

        //display information
        for(Student s: list){
            System.out.println(s.id+" "+s.name+" "+s.className);
        }
    }
}
