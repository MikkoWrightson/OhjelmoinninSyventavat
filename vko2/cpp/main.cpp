#include <iostream>
#include "Student.h"
#include "Trainee.h"

int main(){
    Student *john = new Student("John", "3210");
    Trainee *mary = new Trainee;
    Student *mark = new Student;
    Trainee felix;
    Student jack("jack", "010101");

    // john->printInfo();

    mary->Trainee::printInfo();
    std::cout << std::endl;
    mary->Student::printInfo();
    std::cout << std::endl;
    mary->setName("Mary");
    mary->setStudentnumber("0123");
    mary->setCredits(2);
    mary->printInfo();


    jack.printInfo();
    felix.setName("felix");
    felix.printInfo();



    delete john;
    john = NULL;
    delete mary;
    mary = NULL;
    delete mark;
    mark = NULL;

    return 0;
}