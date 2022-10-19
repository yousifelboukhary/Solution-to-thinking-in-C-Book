#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int occurrence_of_word(string , ifstream &);

int main(){
    ifstream in("write file name");
    cout<<"Enter word to count :";
    string word;
    cin>> word;
    int count = occurrence_of_word(word,in);
    cout<<"number of occurrence of "<<word<<" is : "<<count<<"\n";
}

int occurrence_of_word(string  word, ifstream & in){
    for_each(word.begin(), word.end(), [](char & ch){
        ch = tolower(ch);
    });
    int cnt =0;
    string str;
    while(getline(in, str)){
        stringstream ss(str);
        string s;
        while(getline(ss, s, ' ')){
            for_each(s.begin(), s.end(), [](char & ch){
                ch = tolower(ch);
            });
            if(s == word){
               cnt++;
            }
        }
    }
    return cnt;
}
