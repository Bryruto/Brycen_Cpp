#include <iostream>
#include "Pet.h"


Pet::Pet():name(),DOB(),type(),breed(){}
Pet::Pet(std::string Name,Date dob,std::string Type,std::string Breed):name(Name),DOB(dob),type(Type),breed(Breed){}

const std::string& Pet::getPetName()const{return name;}
const Date& Pet::getPetDOB()const{return DOB;}
const std::string& Pet::getPetType()const{return type;}
const std::string& Pet::getPetBreed()const{return breed;} 

void Pet::setPetName(const std::string& Name){name = Name;}
void Pet::setPetDOB(const Date& dob){DOB = dob;}
void Pet::setPetType(const int& Type){
    switch(Type){
        case 1:type = "DOG"; break;
        case 2:type = "CAT"; break;
        case 3:type = "BIRD";break;
        case 4:type = "SNAKE";break;
    }
}
void Pet::setPetBreed(const std::string& Breed){breed = Breed;}

std::istream& operator>>(std::istream& input,Pet& pet){
    unsigned int m,d,y;
    input >> pet.name;input >> m;input >> d;input >> y;
    pet.DOB = Date(m,d,y);
}
std::ostream& operator<<(std::ostream& output,const Pet& pet){//left of 

    output << std::left << std::setw(15) << "NAME" << ":"<< std::right << std::setw(20) << pet.name << std::endl; 
    output << std::left << std::setw(15) << "DOB" << ":"<< std::right << std::setw(20) << pet. << std::endl;
    output << std::left << std::setw(15) << "TYPE" << ":"<< std::right << std::setw(20) << address.state << std::endl;
    output << std::left << std::setw(15) << "ZIP CODE" << ":" << std::right << std::setw(20) << address.zipCode << std::endl;

    return output;

}
