 
#pragma once

#include "Student.h"
#include <string>


class Trainee : public Student
{
public:
    Trainee();
    Trainee(const std::string& aName, const std::string& aStudentnumber, const int& aCredits, const std::string& aJob, const float& aWage);
    ~Trainee();

    void setJob(const std::string& aJob);
    std::string getJob() const;

    void setWage(const float& aWage);
    int getWage() const;

    void printInfo() const;

private:
    std::string job;
    float wage;
};