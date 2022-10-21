#include <iostream>
using namespace std;
//
int main() {
    int nums_2[8];
    int nums_1[8];
    cout << (long long)nums_1 << "  " << (long long)nums_2 << endl;
    int * int_ptr =nums_1;
    for(int i=0; i<16; i++){
        cout << (long long)int_ptr << "   ";
        int_ptr[i] = i;
    }
    cout<<endl;
    cout<<"array 1 : "<<endl;
    for(int i : nums_1){
        cout<<i<<endl;
    }
    cout<<"array 2 : "<<endl;
    for(int i : nums_2){
        cout<<i<<endl;
    }
    //This is not the solution But another experiment , I made a large array and split it into two array (arr1),(arr2) ->
    cout<<"------------------------"<<endl;
    int arr[16];
    int * const arr1 = arr; //first arr [0 - 8)
    int * const arr2 = &arr[8]; //second arr [8,16)
    //initializing arrays
    for(int i=1; i< 17;i++){
        arr[i-1] = i;
    }
    for(int i=0; i< 8; i++){
        cout<<arr1[i]<<endl;
    }
    for(int i=0; i<8; i++){
        cout<<arr2[i]<<endl;
    }
    char *ch =reinterpret_cast<char *>(arr2);
    *ch = 50;
    cout<<"----------------------"<<endl;
    for(int i=0; i< 8; i++){
        cout<<arr1[i]<<endl;
    }
    cout<<"Change -> ";
    for(int i=0; i<8; i++){
        cout<<arr2[i]<<endl;
    }
}
