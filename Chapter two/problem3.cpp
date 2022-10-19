#include <iostream>
#include "bits/stdc++.h"
using namespace std;
void count(ifstream & in);
int main(){
    ifstream in("write file name here");
    count(in);
}

void count(ifstream & in){
    string str;
    int cnt = 0;
    while(getline(in, str)){
        stringstream ss(str);
        string s;
        while(getline(ss, s , ' ')){
            cnt++;
        }
    }
    cout<<"number of whitespace-separated words is : "<<cnt<<endl;
}
