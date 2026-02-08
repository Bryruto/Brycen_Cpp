#include "cinema.h"
 

std::string get_week(){
    std::string week;

    do {
        std::cout << "weekday or weekend: ";
        std::cin >> week;
    }
    while (week != "weekday" && week != "weekend");
    
    return week;
}

int get_age(){
    std::cout << "what is yours age : ";
    int age;std::cin >> age;
    return age;
}


void output(std::string week,int age){
    int cost{}; 

    if(week == "weekday")
        cost = (age>=65) ? 10 : (age>=18) ? 15 : 12;

    else
        cost = (age>=65) ? 14 : (age>=18) ? 20 : 16; 

    std::cout << week << ":" << age  << "-> cost: $" << cost; 
}
 




