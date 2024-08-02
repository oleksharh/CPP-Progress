#include <iostream>

int main() {
    constexpr double cm_in_inch = 2.54;
    double enter_value;
    std::string unit;

    std::cout << "Enter value and unit: ";
    std::cin >> enter_value >> unit;

    if (unit == "cm"){
        std::cout << enter_value/cm_in_inch << "inches" << std::endl;
    } else {
        std::cout << enter_value*cm_in_inch << "cms" << std::endl;
    }
    return 0;
}