#include <iostream>

using namespace std;

int main() {
    
    int a = 5;
    int b = 8;

    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    cout << a / b << endl;
    cout << a % b << endl;

    cout << (a << 2) << endl;
    cout << (a >> 2) << endl;

    cout << (a > b) << endl;
    cout << (a == b) << endl;
    cout << (a != b) << endl;
    
    bool t = true;
    bool f = false;

    cout << (t && f) << endl;
    cout << (t || f) << endl;

    cout << (a & b) << endl;
    cout << (a | b) << endl;

    a += 4;

    cout << a << endl;

    a++;

    cout << a << endl;


    return 0;
}