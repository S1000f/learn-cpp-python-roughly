#include <iostream>

int main() {
    int a = 4;
    int d = 3;
    int ret[100] = {0};
    ret[0] = a;

    for (int i = 1; i < 100; i++) {
        ret[i] = ret[i - 1] + d;
    }

    for (int i = 0; i < 100; i++) {
        std::cout << ret[i] << std::endl;
    }
}