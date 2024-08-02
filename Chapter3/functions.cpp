#include <iostream>

constexpr int square__func_mine(int x); // Forward declaration

int main() {
    // constexpr int out = square__func_mine(454);
    std::cout << square__func_mine(454);
    return 0;
}

constexpr int square__func_mine(int x) {
    return x * x;
}
