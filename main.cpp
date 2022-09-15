#include <iostream>
#include <iomanip>
#include <string>
#include <regex>


// for regex expression details, see:
// https://linuxhint.com/regular-expression-basics-cpp/

using namespace std;

int main(){
    float a,b,c,s;
    scanf("%f, %f, %f", &a, &b, &c);
    s = (a + b + c) / 2;

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    cout << "s: " << s << endl;

}
