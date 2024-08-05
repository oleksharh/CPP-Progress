#include <iostream>

void modify(int& ref) {
    ref = 20;  // Modifies the original variable
}

int main() {
    int num = 10;
    int& ref = num; // ref is a reference to num

    std::cout << "Before modify(): num = " << num << std::endl;

    modify(ref); // Pass reference to function

    std::cout << "After modify(): num = " << num << std::endl; // num is modified
    return 0;
}
