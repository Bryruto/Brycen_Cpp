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
//preprocessor statments just copy and paste really
#pragma once
#include <iostream>
#include <string>

class Student{
    //my private variables with default values
    private:
        int sId{};
        std::string fName{};
        std::string lName{};
        std::string address{};
        long phoneNumber{};
        std::string grades{};
        std::string classes{};
        int count{};

    public:
        //constructors
        Student();
        Student(const int,const std::string, const std::string,const std::string ,const long,const std::string,const std::string,const int);

        //getters
        int getSID() const;
        std::string getFName() const;
        std::string getLName() const;
        std::string getAddress() const;
        long getPhoneNumber() const;
        int getCount() const;

        //setters
        void setSID(const int);
        void setFName(const std::string);
        void setLName(const std::string);
        void setAddress(const std::string);
        void setPhoneNumber(const long);
        void setCount();
        void setStudent(const int, const std::string, const std::string,const std::string,const long, const std::string, const std::string,const int);
        void setGrade(std::string);
        void setClass(std::string);

        //methods
        void displayStudent()const;
        int getGrade(const int)const;
        std::string getClass(const int)const;
        void addClass(const std::string,const int);
        std::string convertLetterGrade(const int)const;
        void listGrades()const;
        void line(int)const;
};