#include <iostream>
using namespace std;

typedef struct Struct{
    string s1;
    string s2;
    int i;
}Struct;
int main() {
    Struct s;
    s.s1 = "Yousif ";
    s.s2 = "Hamada ""\n";
    s.i = 1000000000;
    cout<<s.s1<<s.s2<<"phone number : "<<s.i<<endl;
    Struct * s_ptr = &s;
    s_ptr->s1 = "YUSUF ";
    s_ptr->s2 = "HAMADA ""\n";
    s_ptr->i = 1111111111;
    cout<<"After Change "<<endl;
    cout<<s.s1<<s.s2<<"phone number : "<<s.i<<endl;
}
