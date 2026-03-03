/*
Name-> Brycen Anderson
ID-> 111017061
structure-> arrayTools.h -> vectorTools.h -> main.cpp -> arrayTools.cpp , vectorTools.cpp
status-> working as intended
compile-> g++ src/*.cpp -o run
run->./run
*/
#include "vectorTools.h"
#include "arrayTools.h"

#include <array>
#include <vector>
#include <iostream>

#define printA displayA(array,size)
#define printV displayV(arrayV)


//dont want to write this over and over just a display
void displayA(std::array<int,MAX_SIZE> arr,int size){
    for(int i{};i<size;i++)
        std::cout<< arr[i] << ' ' << std::endl;
}

//same thing just for vector
void displayV(std::vector<int> arr){
    for(int i:arr)
        std::cout<< i << ' ' << std::endl;
}


int main(){
    const int size{5};
    std::array<int,MAX_SIZE> array;
    generateArray(array,size,1,100);
    printA;

    reverseArray(array,size);
    printA;

    rotateArray(array,size,2);
    printA;

    int index = findElement(array,size,3);
    std::cout << index <<std::endl;

    sortArray(array,size);
    printA;

    std::vector<int> arrayV;
    int ar[] = {1,3,4,2,43};
    addElements(arrayV,ar,size);
    printV;

    arrayV = filterElements(arrayV,19);
    printV;

    printElements(arrayV,3);

    std::vector<float> fl = scaleElements(arrayV);
    for(auto floatt:fl)
        std::cout << floatt << std::endl;


    std::string text{"why does this happen to me"};
    std::vector<std::string> str = splitString(text,' ');
    for(std::string st : str)
        std::cout << st << " " << std::endl;

}