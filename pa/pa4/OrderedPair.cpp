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
#include "OrderedPair.h"
#include <iostream>
#include <cmath>
#include <iomanip>

//constructors
OrderedPair::OrderedPair(){}
OrderedPair::OrderedPair(const double x_value, const double y_value){
    setPairVal(x_value,y_value);
}


//setters
void OrderedPair::setXVal(const double val){xVal = val;}
void OrderedPair::setYVal(const double val){yVal = val;}


//getters
double OrderedPair::getXVal()const{return xVal;}
double OrderedPair::getYVal()const{return yVal;}


//full setters
void OrderedPair::setPairVal(const double& x_value,const double& y_value){
    setXVal(x_value);
    setYVal(y_value);
}


//add single pair
double OrderedPair::addPair(){return xVal + yVal;}

//add pair1 and pair2 then set to current instance
void OrderedPair::addPair(const OrderedPair& pair1,const OrderedPair& pair2){
    xVal = pair1.xVal + pair2.xVal;
    yVal = pair1.yVal + pair2.yVal;
}


//subtract single pair
double OrderedPair::subtractPair(){return xVal - yVal;}

//subtract pair1 and pair2 then set to current instance
void OrderedPair::subtractPair(const OrderedPair& pair1,const OrderedPair& pair2){
    xVal = pair1.xVal - pair2.xVal;
    yVal = pair1.yVal - pair2.yVal;
}


//multiply single pair
double OrderedPair::multiplyPair(){return xVal * yVal;}

//multiply pair1 and pair2 then set to current instance
void OrderedPair::multiplyPair(const OrderedPair& pair1,const OrderedPair& pair2){
    xVal = pair1.xVal * pair2.xVal;
    yVal = pair1.yVal * pair2.yVal;
}


//divide single pair
double OrderedPair::dividePair(){
    if(yVal != 0) return xVal/yVal;
    std::cout << "yVal==0";
    return 0.0;
}

//dividePair pair1 and pair2 then set to current instance
void OrderedPair::dividePair(const OrderedPair& pair1, const OrderedPair& pair2){
    if(pair2.xVal == 0 || pair2.yVal == 0)
        std::cout << "DIVIDE BY ZERO";
    else{
        xVal = pair1.xVal / pair2.xVal;
        yVal = pair1.yVal / pair2.yVal;
    }
    return;
}


//power of single pair
double OrderedPair::powerPair(){return std::pow(xVal,yVal);}

//display Pair info
void OrderedPair::displayPair()const{
    std::cout << std::fixed <<  std::setprecision(6) << "(" << xVal << ", " << yVal << ")" << std::endl;
    std::cout.unsetf(std::ios::fixed);
}