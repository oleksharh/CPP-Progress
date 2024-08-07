#include <iostream>
#include <functional>
#include <stdexcept>

// Simple `expect` function that validates a condition
void expect(const std::function<bool()>& condition, const std::string& message) {
    if (!condition()) {
        throw std::runtime_error(message);
    }
}

// Function to calculate the area of a rectangle
int area(int length, int width) {
    // Ensure arguments are positive
    expect([&] { return 0 < length && 0 < width; }, "bad arguments to area()");
    
    int a = length * width;
    
    // Ensure area result is positive
    expect([&] { return 0 < a; }, "bad area() result");
    
    return a;
}

int main() {
    try {
        int length = 5;
        int width = 10;
        int result = area(length, width);
        std::cout << "Area: " << result << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    
    return 0;
}
