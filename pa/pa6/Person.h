#pragma once
#include <string>
#include <iostream>
#include "Address.h"
#include "Pet.h"
#include <vector>

class Person{
    private:
        std::string fName;
        std::string lName;
        Address address;
        std::vector<Pet*> pets;

    public:
        Person();
        Person(const std::string&,const std::string&,const Address&);
        Person(const std::string&,const std::string);

        const std::string& getFirstName()const;
        const std::string& getLastName()const;
        const Address& getAddress()const;
        const std::vector<Pet*>& getPets()const;

        void setFirstName(const std::string&);
        void setLastName(const std::string&);
        void setAddress(const Address&); 
        void setStreetName(const std::string&);
        void setCityName(const std::string&);
        void setStateName(const std::string&);
        void setZipCode(const size_t&);

        friend void operator+(std::vector<Pet*>&,Pet*);
        friend void operator-(std::vector<Pet*>&,Pet*);
        friend std::istream& operator>>(std::istream&,Person&);
        friend std::ostream& operator<<(std::ostream&,const Person&);
        bool searchPet(const std::string&);
        void addPet();
        void deletePet();
        
    };