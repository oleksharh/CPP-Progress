#include <iostream>

int main() {
    int ent_val;
    std::cout << "Enter the limit of the max power: ";
    std::cin >> ent_val;

    int i = 0;
    while (i < ent_val){
        std::cout << i << "\t" << i*i << "\t";
        std::cout << char(65 + i) << std::endl;
        ++i;
    }
    return 0;
}