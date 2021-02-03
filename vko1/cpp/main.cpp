#include <iostream>
#include "student.h"

int main(){
    Student *john = new Student("John", "3210");
    Student *mary = new Student;
    Student *mark = new Student;
    Student felix;
    Student jack("jack", "010101");

    john->printStudentInfo();

    mary->printStudentInfo();
    mary->setName("Mary");
    mary->setStudentnumber("0123");
    mary->setCredits(2);
    mary->printStudentInfo();


    jack.printStudentInfo();
    felix.setName("felix");
    felix.printStudentInfo();



    delete john;
    john = NULL;
    delete mary;
    mary = NULL;
    delete mark;
    mark = NULL;

    return 0;
}