#include <iostream>
#include <unordered_set>
using namespace std;
//Read the comment below code
enum color{
    Blue = 1,
    Red = 5,
    Green =3,
    Black =4,
};
int main() {
    unordered_set<color>st={Black, Red, Green, Blue};  //To facilitate searching 
    for(int i = 0; i<= 5; i++){   //5 is max color
        if(st.find(color(i)) != st.end()){
            cout<<i<<endl;
        }
    }
}
/* "In C you can say a++, but in C++
you can’t. This is because incrementing an enumeration is
performing two type conversions, one of them legal in C++ and one
of them illegal. First, the value of the enumeration is implicitly cast
from a color to an int, then the value is incremented, then the int is
cast back into a color. In C++ this isn’t allowed, because color is a
distinct type and not equivalent to an int. This makes sense,
because how do you know the increment of blue will even be in the
list of colors?"
 //-> Thinking in C++ vol : 1 p : 194
 */
