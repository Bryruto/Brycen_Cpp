#include "Log.h"// is just putting all in Log.h in this file so this > void Log(const char* message);
#include <iostream>

//the difference between <> and "" 
//<> -> tells the compiler to search the path folders in computer
//"" -> means it is realive to the file so samefoler "..\Log.h" if a file back 



//void Log(const char* message);
//declaration this is saying that Log is a function it will be defined later
//you have to put this at the top of all the files that use this log function
//the header file does this for you with include because include in just a copy paste

void InitLog()
{
    Log("Initializing Log");
}

void Log(const char* message)
{
    std::cout << message << std::endl;
}