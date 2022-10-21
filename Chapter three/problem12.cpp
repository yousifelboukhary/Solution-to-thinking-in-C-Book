#include <iostream>
#define PR(STR, EXPR) \
 cout << STR; printBinary(EXPR); cout << endl;
using namespace std;
void printBinary(unsigned char val);
int main() {
    ////Boolean.cpp
    int i,j;
    cout << "Enter an integer:";
    cin >> i;
    cout << "Enter another integer:";
    cin >> j;
    cout<<boolalpha; ////alphanumerical bool values
    cout << "i > j is " <<  (i > j) << endl;
    cout << "i < j is " << (i < j) << endl;
    cout << "i >= j is " << (i >= j) << endl;
    cout << "i <= j is " << (i <= j) << endl;
    cout << "i == j is " << (i == j) << endl;
    cout << "i != j is " << (i != j) << endl;
    cout << "i and j is " << (i and j) << endl;
    cout << "i or j is " << (i or j) << endl;
    cout << " (i < 10) and (j < 10) is "
         << ((i < 10) and (j < 10)) << endl;
    /****************************************************************************/
    ////Bitwise.cpp
    unsigned int getval;
    unsigned char a, b;
    cout << "Enter a number between 0 and 255: ";
    cin >> getval; a = getval;
    PR("a in binary: ", a);
    cout << "Enter a number between 0 and 255: ";
    cin >> getval; b = getval;
    PR("b in binary: ", b);
    PR("a | b = ", a bitor b);
    PR("a & b = ", a bitand b);
    PR("a ^ b = ", a xor b);
    PR("~a = ", compl a);
    PR("~b = ", compl b);
    // An interesting bit pattern:
    unsigned char c = 0x5A;
    PR("c in binary: ", c);
    a or_eq c;
    PR("a |= c; a = ", a);
    b and_eq c;
    PR("b &= c; b = ", b);
    b xor_eq a;
    PR("b ^= a; b = ", b);
}
void printBinary(const unsigned char val){
    for(int i=7; i>=0; i--){
        if(val bitand (1 << i)){
            cout<<"1";
        }
        else{
            cout<<"0";
        }
    }
}
