#pragma once 
//this makes it so if this is already one of these in file dont add another
//this is a header guards

void Log(const char* message);
void InitLog();

//this file is holding all the declarations then we just #include "Log.h" and that copies this is the file