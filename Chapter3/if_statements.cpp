#include <iostream>

int main() {
    int a =0;
    int b= 0;
    std::cout << "Enter two digits: ";
    std::cin >> a >> b;

    if (a > b){
        std::cout << a << std::endl;
    } else {
        std::cout << b << std::endl;
    }
    return 0;
}