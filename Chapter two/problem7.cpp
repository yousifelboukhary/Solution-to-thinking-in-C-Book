#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    ifstream in("demo.txt");
    string line;
    while (getline(in, line)){
        cout<<line<<endl;
        cout<<"Press Enter key to continue...";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}
