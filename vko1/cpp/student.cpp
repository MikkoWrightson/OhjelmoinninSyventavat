#include "student.h"
#include <iostream>
#include <string>
using namespace std;

    Student::Student(){
        setName("NONAME");
        setStudentnumber("NONUMBER");
        setCredits(0);
    }

    Student::Student(const string& aName, const string& aStudentnumber){
        setName(aName);
        setStudentnumber(aStudentnumber);
        setCredits(0);
    }

    Student::~Student(){

    }

    void Student::setName(const string& aName){
        name = aName;
    }

    string Student::getName() const{
        return name;
    }

    void Student::setStudentnumber(const string& aStudentnumber){
        studentnumber = aStudentnumber;
    }

    string Student::getStudentnumber() const{
        return studentnumber;
    }

    void Student::setCredits(const int& aCredits){
        credits = aCredits;
    }

    int Student::getCredits() const{
        return credits;
    }

    void Student::printStudentInfo() const{
        std::cout << "Name: " << getName() << "\nStudent number: " << getStudentnumber() << "\nCredits: " << getCredits() << std::endl;
    }
