#include "iostream"
using namespace std;
int main() {
    int A, B, X, Y, Z;
    A=0;
    B=0;
    cout<<"Enter variables  X, Y, Z to evaluate A = X + Y - 2/2 + Z expression :"<<endl;
    cout<<"X : "<<endl;
    cin>>X;
    cout<<"Y : "<<endl;
    cin>>Y;
    cout<<"Z : "<<endl;
    cin>>Z;
    A = X + Y - 2/2 + Z;
    cout<<"Enter variables  X, Y, Z to evaluate A = X + Y - 2/2 + Z expression :"<<endl;
    cout<<"X : "<<endl;
    cin>>X;
    cout<<"Y : "<<endl;
    cin>>Y;
    cout<<"Z : "<<endl;
    cin>>Z;
    B = X + (Y - 2)/(2 + Z);
    cout<<"First Expression : "<<A<<endl;
    cout<<"Second Expression : "<<B<<endl;
}
