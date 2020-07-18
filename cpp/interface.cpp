#include <iostream>
#define interface struct

using namespace std;

interface A {
    virtual void callTest() = 0;
};

class B : public A {
    public:
    virtual void callTest() {
        cout << "interface Test" << endl;
    }
};

class Abstract {
    public:
    virtual void call() = 0;
};

class C : public Abstract {
    public:
    void call() {
        cout << "class C" << endl;
    }
};

class D : public Abstract {
    public:
    void call() {
        cout << "class D" << endl;
    }
};

int main() {
    A *b = new B();
    b->callTest();

    C *c = new C();
    D *d = new D();
    c->call();
    d->call();

    return 0;
}