#include "Trainee.h"
#include <iostream>

    Trainee::Trainee(){
        setName("NONAME");
        setStudentnumber("NONUMBER");
        setCredits(0);
        setJob("NOJOB");
        setWage(0);
    }

    Trainee::Trainee(const std::string& aName, const std::string& aStudentnumber, const int& aCredits, const std::string& aJob, const float& aWage){
        setName(aName);
        setStudentnumber(aStudentnumber);
        setCredits(aCredits);
        setJob(aJob);
        setWage(aWage);
    }

    Trainee::~Trainee(){

    }

    void Trainee::setJob(const std::string& aJob){
        job = aJob;
    }

    std::string Trainee::getJob() const{
        return job;
    }

    void Trainee::setWage(const float& aWage){
        wage = aWage;
    }

    int Trainee::getWage() const{
        return wage;
    }

    void Trainee::printInfo() const{
        Student::printInfo();
        std::cout << "Job: " << job << "\nWage: " << wage << std::endl;
    }
