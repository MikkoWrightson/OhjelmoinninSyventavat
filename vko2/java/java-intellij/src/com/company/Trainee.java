package com.company;

public class Trainee extends Student {

    private String job;
    private float wage;

    public Trainee() {
        System.out.printf("Trainee constructor%n");
    }

    public Trainee(String name, String studentNO, int credits, String job, float wage) {
        super(name, studentNO);
        this.job = job;
        this.wage = wage;
        System.out.printf("Trainee constructor with arguments%n");
    }

    public String getJob() {
        return job;
    }

    public void setJob(String job) {
        this.job = job;
    }

    public float getWage() {
        return wage;
    }

    public void setWage(float wage) {
        this.wage = wage;
    }

    @Override
    public void printInfo() {
        super.printInfo();
        System.out.printf("%nJob: %s%nWage: %f%n", job, wage);
    }
}
