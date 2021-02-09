#include "Student.h"
#include <iostream>

    Student::Student(){
        std::cout << "Student constructor\n";
        m_name = "NOm_name";
        m_studentnumber = "NONUMBER";
        m_credits = 0;
    }

    Student::Student(const std::string& aName, const std::string& aStudentnumber) : m_name(aName), m_studentnumber(aStudentnumber){
        std::cout << "Student constructor with arguments\n";
    }

    Student::~Student(){
        std::cout << "Student destructor\n";
    }

    void Student::setName(const std::string& aName) {
        m_name = aName;
    }

    std::string Student::getName() const{
        return m_name;
    }

    void Student::setStudentnumber(const std::string& aStudentnumber){
        m_studentnumber = aStudentnumber;
    }

    std::string Student::getStudentnumber() const{
        return m_studentnumber;
    }

    void Student::setCredits(const int& aCredits){
        m_credits = aCredits;
    }

    int Student::getCredits() const{
        return m_credits;
    }

    void Student::printInfo(){
        std::cout << "m_name: " << m_name << "\nStudent number: " << m_studentnumber << "\nm_credits: " << m_credits << std::endl;
    }
