#include "cinema.h"

int get_age(){
    std::cout << "what is yours age : ";
    int age;std::cin >> age;
    return age;
}

std::string get_week(){
    std::string week;
    for(;;){
        std::cout << "is it a weekday or weekend";
        std::cin >> week;
        }
    return week;
}

void output(std::string week,int age){
    std::cout << week << age
}



