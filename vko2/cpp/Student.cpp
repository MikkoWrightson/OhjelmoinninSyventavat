#include "Student.h"
#include <iostream>

    Student::Student(){
        setName("NONAME");
        setStudentnumber("NONUMBER");
        setCredits(0);
    }

    Student::Student(const std::string& aName, const std::string& aStudentnumber){
        setName(aName);
        setStudentnumber(aStudentnumber);
        setCredits(0);
    }

    Student::~Student(){

    }

    void Student::setName(const std::string& aName){
        name = aName;
    }

    std::string Student::getName() const{
        return name;
    }

    void Student::setStudentnumber(const std::string& aStudentnumber){
        studentnumber = aStudentnumber;
    }

    std::string Student::getStudentnumber() const{
        return studentnumber;
    }

    void Student::setCredits(const int& aCredits){
        credits = aCredits;
    }

    int Student::getCredits() const{
        return credits;
    }

    void Student::printInfo() const{
        std::cout << "Name: " << getName() << "\nStudent number: " << getStudentnumber() << "\nCredits: " << getCredits() << std::endl;
    }
