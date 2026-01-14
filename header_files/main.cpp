#include <iostream>
#include "Log.cpp"

void Log(const char* message)
{
    std::cout << message << std::endl;
}

int main()
{
    Log("Hello World!");
    std::cin.get();
}