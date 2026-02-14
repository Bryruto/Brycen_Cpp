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
#include <string>
#include <iomanip>
#include <sstream>

//constructor default and full constructor
Student::Student(){}

Student::Student(const int id,const std::string fname,const std::string lname,const std::string add,const long pnum ,const std::string grad,const std::string cl,const int _count){
        setStudent(id,fname,lname,add,pnum,grad,cl,_count);
    }

//getters returning value as a constant
int Student::getSID() const{return sId;}
std::string Student::getFName() const{return fName;}
std::string Student::getLName() const{return lName;}
std::string Student::getAddress() const{return address;}
long Student::getPhoneNumber() const{return phoneNumber;}
int Student::getCount() const{return count;}

//method get class ask for position and returns value at position
std::string Student::getClass(const int position)const{
    std::stringstream in(classes);
    std::string value;

    int counter{};
    while (in >> value ){
        if (counter++ == position){
            return value;
        }
    }
    return "";
}

//method get class ask for position and returns value at position
int Student::getGrade(const int gradePosition)const{
    std::istringstream iss(grades);
    std::string value;
    int counter(0);
    while (iss >> value)
    {
        if (counter++ == gradePosition)
        {
        return std::stoi(value);
        }
    }
    return -1;
    }

//setters for member variables
void Student::setSID(const int id){sId = id;}
void Student::setFName(const std::string name){fName = name;}
void Student::setLName(const std::string name){lName = name;}
void Student::setAddress(const std::string add){address = add;}
void Student::setPhoneNumber(const long pnum){phoneNumber = pnum;}

//setter for the students instance if given everything
void Student::setStudent(const int id, const std::string fname, const std::string lname,const std::string add,const long pnum, const std::string grade, const std::string cl,const int Count){
    setFName(fname);
    setLName(lname);
    setAddress(add);
    setPhoneNumber(pnum);
    setCount();
    addClass(cl,std::stoi(grade));//my bug didnt do std::
}

void Student::setCount(){ //set the counter to the number of grades (and classes) in the string

    std::istringstream iss(grades);
    std::string value;

    int counter = 0;
    while (iss >> value)
    {
        counter++;
    }
    count = counter;
}


void Student::addClass(const std::string cl ,const int grade){
    if (grade >= 0 && grade <= 100 && !cl.empty()){
        grades+= " " + (std::to_string(grade));
        classes+=" " + cl;
    }
    }

    //use switch to find grade
    /*
    make 2 variable
        one for the tens
        one for the ones
    if grade / 10
    10-9 = A
    8 = B
    7 = C
    6 = D
    then find mod for to get a sign
    bool is true = 1 and false = 0 these lets me do 3 cases
    0 = -
    1 = ""
    2 = +
    letter + sign
     */
std::string Student::convertLetterGrade(const int grade)const{//todo must be switch
    std::string letter;
    std::string sign;

    switch (grade/10){
        case 10:
        case 9: letter = "A";break;
        case 8: letter = "B";break;
        case 7: letter = "C";break;
        case 6: letter = "D";break;
        default: return "F";
    }

    int tmp = grade%10;
    switch ((tmp >= 4)+(tmp >= 7)){
        case 0: sign = "-";break;
        case 1: sign = "";break;
        case 2: sign = "+";break;
    }

    return (letter+sign);
}

/*list the grades of the student
output a line of - 15 times
output class and grd with formatting
output line of size 15 again
get classes and grades
iterate through both
    output class and letter of grade
    add grade as int to total
    add 1 to div
if div 0 there are no classes or grades
if there is output the average as float */
void Student::listGrades()const{
    line(15);

    std::cout << std::left << std::setw(8)<< "Class" << std::right << std::setw(7) << "GRD"<< std::endl;
    line(15);


    std::stringstream cl(classes);
    std::stringstream grade(grades);
    std::string c,gr;
    float total{};float div{};


    while(cl >> c && grade >> gr){
        std::cout << std::left << std::setw(13)<< c << std::right << std::setw(2) << convertLetterGrade(std::stoi(gr))<< std::endl;
        total+=static_cast<float>(std::stoi(gr));
        div++;
    }
    line(15);
    if (div == 0)
        std::cout << "Average: N/A\n";
    else
        std::cout << std::left << std::setw(10)<< "Average:" << std::right << std::setw(5) << std::fixed << std::setprecision(2) << (div ? total / div : 0.0f) << std::endl;
}

//this will display the student information id,fname,lname,address,phone numbers
void Student::displayStudent()const{
    line(34);
        std::cout << std::left << std::setw(15) << "Student ID"<< "|" << std::right << std::setw(18) << sId << std::endl;
        std::cout << std::left << std::setw(15) << "First Name"<< "|" << std::right << std::setw(18) << fName << std::endl;
        std::cout << std::left << std::setw(15) << "Last Name"<< "|" << std::right << std::setw(18) << lName << std::endl;
        std::cout << std::left << std::setw(15) << "Address"<< "|" << std::right << std::setw(18) << address << std::endl;
        std::cout << std::left << std::setw(15) << "Phone Number"<< "|" << std::right << std::setw(18) << phoneNumber << std::endl;
    line(34);
}

//this method prints a line of any size given
void Student::line(int size)const {
    for(size_t till{}; till < size; till++)
        std::cout << "-";
    std::cout << std::endl;
    }
