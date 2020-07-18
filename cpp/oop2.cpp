#include <iostream>

using namespace std;

class A {
    public:
    void func() {
        cout << "no parameter" << endl;
    }

    void func(int a) {
        cout << a << endl;
    }

    void func(double b) {
        cout << b << endl;
    }

    int func(int a, int b) {
        return a + b;
    }

    void info(int a) {
        cout << a << endl;
    }
};

class B : public A {
    public:
    virtual void info(int a) {
        cout << a + 1 << endl;
    }
};

int main() {
    A *a = new A();

    a->func();
    a->func(4);
    a->func(4.33);
    cout << a->func(5, 3) << endl;

    B *b = new B();
    b->info(50);
    
    return 0;
}