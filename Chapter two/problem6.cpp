#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<string> v;
    string concatenate;
    ifstream in("Fillvector.cpp");
    string line;
    while(getline(in, line)){
        v.push_back(line); // Add the line to the end
        concatenate+=" ";
        concatenate+=line;
      }
    // Add line numbers:
    for(int i = 0; i <v.size() ; i++)
        cout << i << ": " << v[i] << endl;
}
