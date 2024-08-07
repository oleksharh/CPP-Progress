#include <iostream>
#include <stdexcept> // For std::runtime_error

int main() {
    // Throw an exception
    throw std::runtime_error("This is an uncaught exception");

    // The following code will not be executed
    std::cout << "This will not be printed." << std::endl;

    return 0;
}
