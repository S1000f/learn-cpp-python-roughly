#include <iostream>

using namespace std;

class A {
    public:
        void fn() {
            cout << "method" << endl;
        }

        int sum(int a, int b) {
            return a + b;
        }

        int sumPvt(int a) {
            return fnPrivete(a);
        }

    private:
        int fnPrivete(int a) {
            return a + 10;
        }

};

class B : public A {
    public:
    void fnB() {
        cout << "method in Class B" << endl;
    }
};

int main() {
    A *a = new A();
    a->fn();
    cout << a->sum(4, 5) << endl;
    cout << a->sumPvt(3) << endl;
    
    B *b = new B();
    b->fn();
    b->fnB();
    cout << b->sumPvt(54) << endl;

    return 0;
}