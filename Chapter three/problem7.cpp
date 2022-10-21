#include <iostream>
using namespace std;
string func_1(string* str);
string func_2(string& str);
int main() {
    string str = "My_name_is_yousif";
    cout<<"after first change : "<<func_1(&str)<<endl;
    cout<<"after second change : "<<func_2(str)<<endl;
}
string func_1(string* str){
    for(char & it : *str){
        it = 'a';
    }
    return *str;
}

string func_2(string& str){
    for(char & i : str){
        i = 'b';
    }
    return str;
}
