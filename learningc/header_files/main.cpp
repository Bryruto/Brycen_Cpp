#include <iostream>
#include "Log.h"

//this is a definition where we can see what the code does
//void Log(const char* message)
//{
//    std::cout << message << std::endl;
//}
//moved this to Log.h


int main()
{
    InitLog();
    Log("Hello World!");
    std::cin.get();
}