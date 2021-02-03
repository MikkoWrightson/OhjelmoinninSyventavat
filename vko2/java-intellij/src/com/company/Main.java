package com.company;

public class Main {

    public static void main(String[] args) {
        Student janne = new Student();
        janne.setName("Janne");
        System.out.println(janne.getName());
        janne.setName("aaro");
        System.out.print(janne.getName());
    }
}
