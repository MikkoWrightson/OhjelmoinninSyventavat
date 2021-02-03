package com.company;

public class Main {

    public static void main(String[] args) {
        Trainee janne = new Trainee();
        Student aaro = new Student();

        janne.setName("Janne");
        System.out.println(janne.getName());
        aaro.setName("Aaro");
        System.out.print(aaro.getName());
        System.out.printf("%n");
        aaro.printInfo();
        System.out.printf("%n");
        janne.printInfo();
    }
}