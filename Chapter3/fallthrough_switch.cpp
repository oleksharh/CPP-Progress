#include <iostream>

// Enumeration for check variable
enum CheckState {
    checked,
    unchecked
};

int main() {
    CheckState check = checked; // Set the initial state to 'checked'
    int val = -5; // Initial value for demonstration

    // Switch statement with fallthrough
    switch (check) {
        case checked:
            if (val < 0) {
                val = 0;
            }
            [[fallthrough]];
        case unchecked:
            // Use val after potential modification
            std::cout << "The value of val is: " << val << std::endl;
            break;
        default:
            std::cout << "Invalid check state." << std::endl;
            break;
    }

    return 0;
}
