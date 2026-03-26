#pragma once
#include <string>
#include <ctime>
#include "Date.h"

class Pet:Date{
    private:
        std::string name;
        Date DOB;
        std::string type;
        std::string breed;

    public:
        Pet();
        Pet(std::string,Date,std::string,std::string);

        const std::string& getPetName()const;
        const Date& getPetDOB()const;
        const std::string& getPetType()const;
        const std::string& getPetBreed()const; 

        void setPetName(const std::string&);
        void setPetDOB(const Date&);
        void setPetType(const int&);
        void setPetBreed(const std::string&);

        friend std::istream& operator>>(std::istream&,Pet&);
        friend std::ostream& operator<<(std::ostream&,Pet&); 
};