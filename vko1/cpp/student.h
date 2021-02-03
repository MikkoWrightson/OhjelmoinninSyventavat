#pragma once
#include <string>
using namespace std;

class Student{
public:
    Student();
    Student(const string& aName, const string& aStudentnumber);
    ~Student();

    void setName(const string& aName);
    string getName() const;

    void setStudentnumber(const string& aStudentnumber);
    string getStudentnumber() const;

    void setCredits(const int& aCredits);
    int getCredits() const;

    void printStudentInfo() const;

private:

    std::string name;
    std::string studentnumber;
    int credits;

};
