#include <iostream>

int main() {
    int threshold = 0;
    std::cout << "Enter limit: ";
    std::cin >> threshold;

    for (int i = 0; i < threshold; ++i){
        std::cout << i*i << std::endl;
    }
    return 0;
}