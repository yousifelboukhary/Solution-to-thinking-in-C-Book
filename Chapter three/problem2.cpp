#include "iostream"
using namespace std;
int main() {
    for(int i=1; i<=1000; i++){
        bool flag = true;
        for(int j=2; j<i; j++){
            if(i % j == 0){
                flag = false;
                break;
            }
        }
        if(flag){
            cout<< i <<endl;
        }
    }
}
