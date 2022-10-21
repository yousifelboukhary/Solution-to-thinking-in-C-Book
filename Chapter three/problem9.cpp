#include <iostream>
using namespace std;
//Removing static will make i local variable and its life ends after the function call ends
// so the output will be set of ones
void func() {
    static int i = 0;
    cout << "i = " << ++i << endl;
}
int main() {
    for(int x = 0; x < 10; x++)
        func();
}
