#include <iostream>
using namespace std;
int main() {
    double i,j;
    cout << "Enter an double:";
    cin >> i;
    cout << "Enter another double:";
    cin >> j;
    cout<<boolalpha; ////alphanumerical bool values
    cout << "i > j is " <<  (i > j) << endl;
    cout << "i < j is " << (i < j) << endl;
    cout << "i >= j is " << (i >= j) << endl;
    cout << "i <= j is " << (i <= j) << endl;
    cout << "i == j is " << (i == j) << endl;
    cout << "i != j is " << (i != j) << endl;
    cout << "i && j is " << (i && j) << endl;
    cout << "i || j is " << (i || j) << endl;
    cout << " (i < 10) && (j < 10) is "
         << ((i < 10) && (j < 10)) << endl;
}
