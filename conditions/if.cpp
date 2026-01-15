#include "Log.h"
//every thing is loaded to memory when compiled so if statements mean jumping around in memory 

int main(){ 
    int x = 5;
    bool comparisonResult = x == 5;
    // == -> means is every bit the same in x as it is in 5

    //you can also do if(x==5) and delete the comparisonResult its the same
    //an if then a bool like below is checking if its true so its the same as comparisonResult == true
    if (comparisonResult){
        Log("Hello World");
    }
    std::cin.get();
}   

//if you are running more then 1 file to compile run cl *.cpp then .\file.exe 