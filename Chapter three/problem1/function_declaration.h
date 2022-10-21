#ifndef PROBLEMS_FUNCTION_DECLARATION_H
#define PROBLEMS_FUNCTION_DECLARATION_H
#include "iostream"
////We  passing parameters by const reference because we will just print them
/// (they will not changed in the scope of function)
//Group One
void function_1_void(const float&, const int&, const char&);
void function_1_void(const int&, const char&); //Overloaded
void function_1_void(const int&); //Overloaded
////Overloaded ->(change the number or the type of parameters without changing function name and return type)

//Group two
char function_2_char(const float&, const int&, const char&);
char function_2_char(const int &, const char&); //Overloaded
char function_2_char(const char&); //Overloaded

//Group three
int function_3_int(const float&, const int&, const char&);
int function_3_int(const int &, const char&); //Overloaded
int function_3_int(const int&); //Overloaded

//Group four
float function_4_float(const float&, const int&, const char&);
float function_4_float(const float &, const char&); //Overloaded
float function_4_float(const float &); //Overloaded
#endif //PROBLEMS_FUNCTION_DECLARATION_H
