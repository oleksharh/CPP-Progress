#include <iostream>

int main() {
    constexpr double cm_in_inch = 2.54;
    double enter_value;
    char unit;

    std::cout << "Enter value and unit: ";
    std::cin >> enter_value >> unit;

    switch (unit){
    case 'c':
        std::cout << "cm";
        break;
    
    default:
        std::cout << "inch";
        break;
    }

    std::cout << "Please enter a digit\n";
    char a = 0;
    std::cin >> a;

    switch (a) {
    case '0': case '2': case '4': case '6': case '8':
            std::cout << "is even\n";
            break;
    case '1': case '3': case '5': case '7': case '9':
            std::cout << "is odd\n";
            break;
    default:
            std::cout << "is not a digit\n";
            break;
    }

    return 0;
}