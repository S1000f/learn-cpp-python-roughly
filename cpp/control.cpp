#include <iostream>

int main() {

    int a = 10;

    if (a % 2 == 0) {
        std::cout << "even" << std::endl;
    } else {
        std::cout << "odd" << std::endl;
    }

    switch (a % 2 ) {
        case 0:
            std::cout << "even number" << std::endl;
            break;
        case 1:
            std::cout << "odd number" << std::endl;
            break;
    }

    int i;
    for (i = 1; i <= 9; i++) {
        std::cout << a << " * " << i << " = ";
        std::cout << a * i << std::endl;
    }

    int j = 1;
    while (j <= 9) {
        std::cout << a << " x " << j << " = ";
        std::cout << a * j << std::endl;
        j++;
    }

    int k;
    for (k = 0; k < 10; k++) {
        if (k % 3 == 0) {
            continue;
        }
        std::cout << k << std::endl;
    }
    
    

}