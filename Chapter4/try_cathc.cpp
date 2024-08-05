#include <iostream>
#include <stdexcept> // For std::runtime_error

int divide(int a, int b) {
    if (b == 0) {
        throw std::runtime_error("Division by zero error");
    }
    return a / b;
}

int main() {
    try {
        int result = divide(10, 0); // This will throw an exception
        std::cout << "Result: " << result << std::endl;
    } catch (const std::runtime_error& e) {
        std::cerr << "Caught an exception: " << e.what() << std::endl;
    }

    return 0;
}
