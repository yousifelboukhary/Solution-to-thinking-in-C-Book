#include <algorithm>
#include "iostream"
using namespace std;
int main() {
    int i =0;
    cout<<"Enter end to exit the program"<<endl;
    int n = 100000;
    auto * vec= new string [n];
    while (true){
        cout<<"Enter word : "<<endl;
        string word;
        cin>>word;
        for_each(word.begin(), word.end(), [](char & ch){
            ch = tolower(ch);
        });
        if(word == "end")
            break;
        vec[i++] = word;
    }
    for(int j=0; j<i; j++){
        cout<<j+1<<" : "<<vec[j]<<endl;
    }
}
