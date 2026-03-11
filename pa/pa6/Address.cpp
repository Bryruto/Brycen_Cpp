#include "Address.h"
#include <strstream>
#include <iostream>
#include <iomanip>

Address::Address():street(),city(),state(),zipCode(){}
Address::Address(std::string& Street,std::string& City,std::string& State,const size_t& ZipCode):
                                            street(Street),city(City),state(State),zipCode(ZipCode){}


const std::string& Address::getStreetName()const{return street;}
const std::string& Address::getCityName()const{return city;}
const std::string& Address::getStateName()const{return state;}
const size_t& Address::getZipCode()const{return zipCode;}


void Address::setStreetName(const std::string& Street){street = Street;}
void Address::setCityName(const std::string& City){city = City;}
void Address::setStateName(const std::string& State){state = State;}
void Address::setZipCode(const size_t& ZipCode){zipCode = ZipCode;}


std::istream& operator>>(std::istream& input,Address& address){
    std::getline(input,address.street);
    address.format(address.street);

    std::getline(input,address.city);
    address.format(address.city);

    std::getline(input,address.state);
    address.format(address.state);

    input >> address.zipCode;

    return input;
}
std::ostream& operator<<(std::ostream& output,const Address address){
    output << std::left << std::setw(15) << "STREET" << ":"<< std::right << std::setw(20) << address.street << std::endl; 
    output << std::left << std::setw(15) << "CITY" << ":"<< std::right << std::setw(20) << address.city << std::endl;
    output << std::left << std::setw(15) << "STATE" << ":"<< std::right << std::setw(20) << address.state << std::endl;
    output << std::left << std::setw(15) << "ZIP CODE" << ":" << std::right << std::setw(20) << address.zipCode << std::endl;

    return output;
}

std::string Address::format(std::string& word){
    for(int i{};i<word.size();i++){
        if('a' <= word[i] && word[i] <= 'z') word[i] += ('a'-'A');
    }
    return word;
}

