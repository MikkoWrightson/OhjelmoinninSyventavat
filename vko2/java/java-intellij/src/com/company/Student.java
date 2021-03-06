package com.company;

public class Student {
    private String name;
    private String studentNumber;
    private int credits;

    public Student(){
        System.out.printf("Student constructor%n");
    }
    public Student(String aName, String aStudentNO){
        System.out.printf("Student constructor with arguments%n");
        this.setName(aName);
        this.setStudentNO(aStudentNO);
        this.setCredits(0);
    }

    public void setName(String aName){
        this.name = aName;
    }
    public String getName(){
        return this.name;
    }


    public void setStudentNO(String aStudentNO){
        this.studentNumber = aStudentNO;
    }
    public String getStudentNO(){
        return this.studentNumber;
    }

    public void setCredits(int aCredits){
        this.credits = aCredits;
    }
    public int getCredits(){ return this.credits; }

    public void printInfo(){
        System.out.printf("Name: %s%nStudent number: %s%nCredits: %d%n", name, studentNumber, credits );
    }
}
