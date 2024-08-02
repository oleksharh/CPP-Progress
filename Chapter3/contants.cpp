#include <iostream>

// Function declaration with constexpr
constexpr int square(int x) {
    return x * x;
}

int someFunction() {
    return 42; // Example runtime function
}

class MyClass {
public:
    void myConstFunction() const {
        std::cout << "This is a const member function." << std::endl;
    }
};

int main() {
    // const example
    const int runtime_value = someFunction(); // initialized at runtime
    std::cout << "Runtime value: " << runtime_value << std::endl;

    // constexpr example
    constexpr int compile_time_value = 10; // evaluated at compile-time
    constexpr int another_compile_time_value = square(10); // evaluated at compile-time
    std::cout << "Compile-time value: " << compile_time_value << std::endl;
    std::cout << "Another compile-time value: " << another_compile_time_value << std::endl;

    int array[compile_time_value]; // valid because compile_time_value is a constexpr

   for (int i = 0; i < compile_time_value; ++i) {
        array[i] = i * i;
    }

    // Print array elements
    std::cout << "Array elements: ";
    for (int i = 0; i < compile_time_value; ++i) {
        std::cout << *(array + i) << " ";
    }
    std::cout << "END" << std::endl;

    // Using const member function
    MyClass myObject;
    myObject.myConstFunction();

    return 0;
}
