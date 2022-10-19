#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<string> v;
    ifstream in("Fillvector.cpp");
    string line;
    while(getline(in, line))
        v.push_back(line); // Add the line to the end
    // Add line numbers:
    int j =0;
    for(int i = v.size()-1; i >=0 ; i--)
        cout << j++ << ": " << v[i] << endl;
}
