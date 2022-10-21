#include "function_declaration.h"
using namespace std;
int main() {
    int a =5;
    char b = 'b';
    float c = 2.5;
    function_1_void(c,a,b);
    function_1_void(a,b);
    function_1_void(a);
    function_2_char(c,a,b);
    function_2_char(a,b);
    function_2_char(b);
    function_3_int(c,a,b);
    function_3_int(a,b);
    function_3_int(a);
    function_4_float(c,a,b);
    function_4_float(c,b);
    function_4_float(c);
}
