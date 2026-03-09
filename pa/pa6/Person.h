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
        const std::vector<Pet*>& getPet()const;

        
    };