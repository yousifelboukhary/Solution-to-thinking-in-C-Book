#include "function_declaration.h"
using namespace std;

//Group One
void function_1_void(const float& p1, const int& p2, const char&p3){
    cout<<"Function_1_void version 1 : "<<endl;
    cout<<"return type : "<<"void"<<endl;
    cout<<"parameters : "<<p1 <<" and "<<p2<<" and "<<p3<<endl;
}
void function_1_void(const int&p1, const char&p2){
    cout<<"Function_1_void version 2 : "<<endl;
    cout<<"return type : "<<"void"<<endl;
    cout<<"parameters : "<<p1 <<" and "<<p2<<endl;
} //Overloaded
void function_1_void(const int&p){
    cout<<"Function_1_void version 3 : "<<endl;
    cout<<"return type : "<<"void"<<endl;
    cout<<"parameters : "<<p <<endl;
} //Overloaded

//Group two
char function_2_char(const float&p1, const int&p2, const char&p3){
    cout<<"function_2_char version 1 : "<<endl;
    cout<<"return type : "<<"char"<<endl;
    cout<<"parameters : "<<p1 <<" and "<<p2<<" and "<<p3<<endl;
    return p3;
}
char function_2_char(const int &p1, const char&p2){
    cout<<"function_2_char version 2 : "<<endl;
    cout<<"return type : "<<"char"<<endl;
    cout<<"parameters : "<<p1 <<" and "<<p2<<endl;
    return p2;
}
char function_2_char(const char &p){
    cout<<"function_2_char version 3 : "<<endl;
    cout<<"return type : "<<"char"<<endl;
    cout<<"parameters : "<<p <<endl;
    return p;
}

//Group three
int function_3_int(const float&p1, const int&p2, const char&p3){
    cout<<"function_3_int version 1 : "<<endl;
    cout<<"return type : "<<"int"<<endl;
    cout<<"parameters : "<<p1 <<" and "<<p2<<" and "<<p3<<endl;
    return p2;
}
int function_3_int(const int &p1, const char&p2){
    cout<<"function_3_int version 2 : "<<endl;
    cout<<"return type : "<<"int"<<endl;
    cout<<"parameters : "<<p1 <<" and "<<p2<<endl;
    return p1;
}
int function_3_int(const int&p){
    cout<<"function_3_int version 3 : "<<endl;
    cout<<"return type : "<<"int"<<endl;
    cout<<"parameters : "<<p <<endl;
    return p;
}

//Group four
float function_4_float(const float&p1, const int&p2, const char&p3){
    cout<<"function_4_float version 1 : "<<endl;
    cout<<"return type : "<<"float"<<endl;
    cout<<"parameters : "<<p1 <<" and "<<p2<<" and "<<p3<<endl;
    return p1;
}
float function_4_float(const float &p1, const char&p2){
    cout<<"function_4_float version 2 : "<<endl;
    cout<<"return type : "<<"float"<<endl;
    cout<<"parameters : "<<p1 <<" and "<<p2<<endl;
    return p1;
}
float function_4_float(const float &p){
    cout<<"function_4_float version 3 : "<<endl;
    cout<<"return type : "<<"float"<<endl;
    cout<<"parameters : "<< p <<endl;
    return p;
}
