#include <iostream>

int main() {

    std::cout << "Hello world";
    std::cout << std::endl;
    
    char a = 'b';
    std::cout << "a" << std::endl;
    std::cout << a << std::endl;
    std::cout << "a: " << a << std::endl;

    int b = 12;
    std::cout << "b = " << b;
    std::cout << std::endl;

    std::cout << (int)a << std::endl;
    
    std::cout << (char)((int)a - 1) << " " << a << " ";
    std::cout << (char)((int)a + 1) << std::endl;

    std::cout << std::hex << b << std::endl;
    std::cout << std::dec << b << std::endl;
    std::cout << std::oct << b << std::endl;

    return 0;
}