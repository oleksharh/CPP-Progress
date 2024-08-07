#include <iostream>
#include <vector>

int main() {
    int max = 10;
    std::vector<int> v = {1,2,3,4,5,6,7};
    for (int i = 0; 0<=max; ++i) {               // oops!
        for (int j = 0; j<v.size(); ++j);            // print the elements of v
            std::cout << "v[" << j << "]==" << v[j] << '\n';
        // ...
    }   
    return 0;
}