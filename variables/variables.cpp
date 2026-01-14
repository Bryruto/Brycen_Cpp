#include <iostream>
// 1 byte = 8 bits 
int main()//primitive types
{
    int varint = 8; // this is 4 bytes signed by default so -2b -> 2b

    std::cout << varint << std::endl;
    // std -> is a namespace for iostream library
    // :: -> means to go into
    // cout -> is a object in the name space for displaying stuff to a screen
    // << -> this is a overloaded function or insertion operater 
    // endl -> is a function called a stream manipulator
    varint= 20;

    std::cin.get();
    //cin -> object to ask for input from keyboard

    return 0;
    // do this to show it ran successfuly
    
    unsigned int v2;// now it is unsigned so 4 bytes but no negitive so 0-4b
    
    //char,short,int,long,long long
    // char = 1byte used for characters most of the time 65 is A if printed with cout Ascii
    // short = 2byte
    // int = 4byte
    // long = 4byte
    // long long = 8byte
    //there is more but the only real difference is how much data you use 


    //decimal data types 
    //float,double,long double
    float varfloat = 5.5f;//if it does not have the f its a double
    double vardouble = 5.2;
    //float = 4byte 
    //double = 8byte


    //bool data type
    //just true or false
    //false = 0
    //true = anything that is not 0
    //bool = 1byte


    std::cout << sizeof(bool) << std::endl;

    //sizeof is a function that will give the size in bytes of data 
    // you can use sizeof bool or sizeof(bool) both work
}