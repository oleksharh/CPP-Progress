#include <iostream>

int main() {
    std::cout << "Type in your Full name: ";
    std::string first_name;
    std::string second_name;
    std::cin >> first_name >> second_name;
    std::cout << "Hi, " << first_name << " " << second_name; 
    return 0;
}