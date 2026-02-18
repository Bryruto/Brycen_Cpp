#include <iostream>
#include "OrderedPair.h"

int main(){
    OrderedPair pair1;
    OrderedPair pair2(99.888,97.29); 

    pair1.setXVal(8.32);
    pair1.setYVal(932.454);

    OrderedPair pairs[] = {pair1,pair2};

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
    
    OrderedPair result(98239.0923,2347.29);
    result.addPair(pair1,pair2);
    result.subtractPair(pair1,pair2);
    result.multiplyPair(pair1,pair2);
    result.dividePair(pair1,pair2);
    
    result.displayPair();
    return 0;
}