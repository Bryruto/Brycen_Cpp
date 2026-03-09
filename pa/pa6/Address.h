#pragma once
#include <string>
class Address{
    private:
        std::string street;
        std::string city;
        std::string state;
        size_t zipCode;

    public:
        Address();
        Address(std::string&,std::string&,std::string&,const size_t&);


        const std::string& getStreetName() const;
        const std::string& getCityName() const;
        const std::string& getStateName() const;
        const size_t& ZipCode()const;

        void setStreetName(const std::string&);
        void setCityName(const std::string&);
        void setStateName(const std::string&);
        void getZipCode(const size_t&);

        friend std::istream& operator>>(std::istream&,Address&);
        friend std::ostream& operator<<(std::ostream&,const Address);

};