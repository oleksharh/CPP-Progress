#include <iostream>

int main()
    try{
            // our program
            return 0;           // 0 indicates success
    }
    catch (std::exception& e) {
            std::cerr << "error: " << e.what() << '\n';
            return 1;           // 1 indicates failure
    }
    catch (...) {
            std::cerr << "Oops: unknown exception!\n";
            return 2;           // 2 indicates failure
}