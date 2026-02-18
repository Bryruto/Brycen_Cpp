#include "OrderedPair.h"
#include <iostream>
#include <cmath>
#include <iomanip>


OrderedPair::OrderedPair(){}
OrderedPair::OrderedPair(const double x_value, const double y_value){
    setPairVal(x_value,y_value);
}

void OrderedPair::setXVal(const double val){xVal = val;} 
void OrderedPair::setYVal(const double val){yVal = val;}

double OrderedPair::getXVal()const{return xVal;}
double OrderedPair::getYVal()const{return yVal;}

void OrderedPair::setPairVal(const double& x_value,const double& y_value){
    setXVal(x_value);
    setYVal(y_value);
}

double OrderedPair::addPair(){return xVal + yVal;}
void OrderedPair::addPair(const OrderedPair& pair1,const OrderedPair& pair2){
    xVal = pair1.xVal + pair2.xVal;
    xVal = pair1.yVal + pair2.yVal; 
}

double OrderedPair::subtractPair(){return xVal - yVal;} 
void OrderedPair::subtractPair(const OrderedPair& pair1,const OrderedPair& pair2){
    xVal = pair1.xVal - pair2.xVal;
    xVal = pair1.yVal - pair2.yVal; 
}

double OrderedPair::multiplyPair(){return xVal * yVal;}
void OrderedPair::multiplyPair(const OrderedPair& pair1,const OrderedPair& pair2){
    xVal = pair1.xVal * pair2.xVal;
    yVal = pair1.yVal * pair2.yVal;
}

double OrderedPair::dividePair(){
    if(yVal != 0) return xVal/yVal;
    std::cout << "xVal==0" << std::endl;
    return 0.0;
}
void OrderedPair::dividePair(const OrderedPair& pair1, const OrderedPair& pair2){
    if(pair2.xVal == 0 || pair2.yVal == 0)
        std::cout << "DIVIDE BY ZERO" << std::endl; 
    xVal = pair1.xVal / pair2.xVal;
    yVal = pair1.yVal / pair2.xVal;
}

double OrderedPair::powerPair(){return std::pow(xVal,yVal);}
void const OrderedPair::displayPair(){
    std::cout << std::fixed <<  std::setprecision(6) << "(" << xVal << ", " << yVal << ")" << std::endl;
}