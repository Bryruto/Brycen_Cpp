/*
ask for input 
make a variable mamed minutes
put input into a variable named strength 
    if the signal is even divide by 2
    if odd subtract 1 
    add 1 to minutes
show the user the minutes
*/

#include <iostream>

int main(){
    int strength{},min{};std::cout << "what is the strength";std::cin >> strength;
        for(;strength>0;strength = (strength%2 == 0) ? strength/2 : strength - 1){min++;}std::cout << "minutes: " << min;
}