#include "cinema.h"
/* this is cinema.h 
#pragma once

#include <iostream>
#include <string>

void output(std::string,int);
std::string get_week();
int get_age();
*/

//cinema.cpp main 
/* 
ask user for weekday or weekend
store in variable week
ask user for age 
store in variable age 
check if valid input for week and age 
output week,age and cost to screen
*/

int main(){
    std::string week = get_week();
    int age = get_age(); 
    output(week,age);
}


//this is funct.cpp
//#include "cinema.h"
  
/*
itterate till weekday or weekend is input
    ask the user if its a weekday or weekend
    store result in variable week


std::string get_week(){
    std::string week;

    do {
        std::cout << "weekday or weekend: ";
        std::cin >> week;
    }
    while (week != "weekday" && week != "weekend");
    
    return week;
}


    ask the user for an age
    store the age in a variable age


int get_age(){
    std::cout << "what is your age : ";
    int age;std::cin >> age;
    return age;
}



check to see if week "weekend"--- this is string comparison so you dont need a reference
    check to see if age is greater than or equal to 65 
        set cost to 10
    check to see if in 64 - 18 
        set cost to 15 
    else 
        set cost to 12 
else
    check to see if age is greater than or equal to 65 
        set cost to 14
    check to see if in 64 - 18 
        set cost to 20 
    else 
        set cost to 16

output the week : age -> cost: $cost 

void output(std::string week,int age){
    int cost{}; 

    if(week == "weekday")
        cost = (age>=65) ? 10 : (age>=18) ? 15 : 12;

    else
        cost = (age>=65) ? 14 : (age>=18) ? 20 : 16; 

    std::cout << week << ":" << age  << "-> cost: $" << cost << std::endl; 
} 
*/
