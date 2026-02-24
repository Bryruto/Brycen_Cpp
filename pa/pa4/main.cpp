/*
Name-> Brycen Anderson
ID-> 111017061
structure-> OrderedPair.h
            functions.h
            main.cpp
            OrderedPair.cpp
            functions.cpp
status-> working as intended
compile-> g++ src/*.cpp -o run
run->./run
*/
#include <iostream>
#include "OrderedPair.h"
#include "functions.h"
#include <array>

int main(){
    //make 2 instances of orderedpair
    OrderedPair pair1;
    OrderedPair pair2(99.888,97.29);

    //set the x and y values of pair1
    pair1.setXVal(8.32);
    pair1.setYVal(932.454);

    //add elements to array
    OrderedPair pairs[] = {pair1,pair2};

    //loop and call methods
    for(OrderedPair pair : pairs){
        std::cout << pair.getXVal() << std::endl;
        std::cout << pair.getYVal() << std::endl;

        std::cout << pair.addPair() << std::endl;
        std::cout << pair.subtractPair() << std::endl;
        std::cout << pair.multiplyPair() << std::endl;
        std::cout << pair.dividePair() << std::endl;
        std::cout << pair.powerPair() << std::endl;
        pair.displayPair();
    }

    //make an instances of orderedpair
    OrderedPair result(98239.0923,2347.29);
    //call methods
    result.addPair(pair1,pair2);
    result.subtractPair(pair1,pair2);
    result.multiplyPair(pair1,pair2);
    result.dividePair(pair1,pair2);
    result.displayPair();

    std::array<float,MAX_SIZE> arr1;
    std::array<float,MAX_SIZE> arr2;
    std::array<float,MAX_SIZE> arr3;
    std::array<float,MAX_SIZE> arr4;

    getInput(arr1);
    int size = arr1.size();
    display(arr1,size);

    getInput(arr2);
    display(arr2,size);

    getInput(arr3);
    display(arr3,size);

    getInput(arr4);
    display(arr4,size);
}