#include <iostream>

int intsum(int a, int b);

int main() {

    int sum = 0;
    int arr[5] = {4, 3, 3, 2, 5};

    for (int i = 0; i < 5; i++) {
        sum += arr[i];
    }

    std::cout << sum << std::endl;

    int i, j;
    int a[2][2] = {{1, 2}, {3, 4}};
    int b[2][2] = {{1, 2}, {3, 4}};
    int c[2][2];

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            std::cout << "c[" << i << "][" << j << "] = ";
            std::cout << c[i][j] << std::endl;
        }
    }

    std::cout << intsum(3, 4) << std::endl;

    return 0;
}

int intsum(int a, int b) {
    return a + b;
}