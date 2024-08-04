#include <iostream>
#include <vector>
#include <algorithm>   // For std::sort

int main() {
    // Initialize vectors
    std::vector<std::string> philosopher = {"Kant", "Plato", "Hume", "Kierkegaard"};
    std::vector<int> vi(6);             // vector of 6 ints initialized to 0
    std::vector<std::string> vs(4);     // vector of 4 strings initialized to ""
    std::vector<int> v = {5, 7, 9, 4, 6, 8};

    // Print vector v using traditional for loop
    for (int i = 0; i < v.size(); ++i)
        std::cout << v[i] << '\n';
    
    // Print vector v using range-based for loop
    std::vector<int> v1 = {5, 7, 9, 4, 6, 8};
    for (int x : v)
        std::cout << x << '\n';

    // Read temperatures into vector
    std::vector<double> temps; 
    double temp;
    while (std::cin >> temp) {
        temps.push_back(temp); 
    }

    // Compute mean temperature
    double sum = 0;
    for (double x : temps)
        sum += x;
    if (!temps.empty()) {
        std::cout << "Average temperature: " << sum / temps.size() << '\n';
    }

    // Compute median temperature
    if (!temps.empty()) {
        std::sort(temps.begin(), temps.end()); // sort the temperatures
        size_t n = temps.size();
        if (n % 2 == 0) {
            // If even, average the two middle values
            double median = (temps[n / 2 - 1] + temps[n / 2]) / 2;
            std::cout << "Median temperature: " << median << '\n';
        } else {
            // If odd, take the middle value
            std::cout << "Median temperature: " << temps[n / 2] << '\n';
        }
    }

    return 0;
}
