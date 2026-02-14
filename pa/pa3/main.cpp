/*
Name-> Brycen Anderson
ID-> 111017061
structure-> Student.h declarations
            Student.cpp definitions
            main.cpp testing
status-> working as intended
compile-> g++ src/*.cpp -o run
run->./run
*/
//preprocessor statements just copy and paste really
#include "Student.h"
#include <iostream>

int main(){
    //make 2 instances of Student
    Student student1;
    Student student2(1,"brycen","anderson","3057 bright moon dr",7199642413,"78","bio",2);

    //using the setters to fill in member variables
    student1.setSID(0);
    student1.setFName("kylie");
    student1.setAddress("this is an address");
    student1.setLName("Anderson");
    student1.setPhoneNumber(7777778687);
    student1.setCount();
    student1.addClass("Math",83);

    //Student array for my loop later
    Student array[] = {student1,student2};

    //loop for 2 students
    //show student info and grades for classes
    for(Student sud: array){
        sud.displayStudent();
        sud.listGrades();
    }
}