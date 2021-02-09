#pragma once
#include <string>

class Student{
public:
    Student();
    Student(const std::string& aName, const std::string& aStudentnumber);
    ~Student();

    void setName(const std::string& aName);
    std::string getName() const;

    void setStudentnumber(const std::string& aStudentnumber);
    std::string getStudentnumber() const;

    void setCredits(const int& aCredits);
    int getCredits() const;

    virtual void printInfo();

private:

    std::string m_name;
    std::string m_studentnumber;
    int m_credits;

};
