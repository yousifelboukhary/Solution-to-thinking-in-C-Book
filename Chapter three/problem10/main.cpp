#include <iostream>
using namespace std;

static int fs; //only available in this file , if we try to access it using extern from any other files will cause error
int main() {
    fs = 1;
    cout<<fs<<endl;

}
