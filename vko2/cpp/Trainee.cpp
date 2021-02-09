#include "Trainee.h"
#include "Student.h"
#include <iostream>

    Trainee::Trainee(){
        std::cout << "Trainee constructor\n";
        setName("NONAME");
        setStudentnumber("NONUMBER");
        setCredits(0);
        setJob("NOJOB");
        setWage(0);
    }

    Trainee::Trainee(const std::string& aName, const std::string& aStudentnumber, const int& aCredits, const std::string& aJob, const float& aWage) : m_job(aJob), m_wage(aWage) {
        std::cout << "Trainee constructor with arguments\n";
        //Student::Student(aName, aStudentnumber, aCredits);
    }

    Trainee::~Trainee(){
        std::cout << "Trainee destructor\n";
    }

    void Trainee::setJob(const std::string& aJob){
        m_job = aJob;
    }

    std::string Trainee::getJob() const{
        return m_job;
    }

    void Trainee::setWage(const float& aWage){
        m_wage = aWage;
    }

    int Trainee::getWage() const{
        return m_wage;
    }

    void Trainee::printInfo(){
        Student::printInfo();
        std::cout << "Job: " << m_job << "\nWage: " << m_wage << std::endl;
    }
