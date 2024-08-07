#include <iostream>
#include <random>

int main() {
    // Initialize the random engine
    std::default_random_engine engine;

    // Initialize distributions
    std::uniform_int_distribution<int> int_distribution(1, 100); // Range [1, 100]
    std::uniform_real_distribution<double> real_distribution(0.0, 1.0); // Range [0.0, 1.0]

    // Generate and print random integers
    std::cout << "Random integers: ";
    for (int i = 0; i < 5; ++i) {
        int random_int = int_distribution(engine);
        std::cout << random_int << " ";
    }
    std::cout << std::endl;

    // Generate and print random floating-point numbers
    std::cout << "Random floating-point numbers: ";
    for (int i = 0; i < 5; ++i) {
        double random_real = real_distribution(engine);
        std::cout << random_real << " ";
    }
    std::cout << std::endl;

    return 0;
}
