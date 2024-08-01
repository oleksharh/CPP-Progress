#include <iostream>

using namespace std;

int main() {
    cout << "Type in your full name and age: ";
    string first;
    string second;
    double age;
    cin >> first >> second >> age;
    age *= 12;
    string full = first + " " + second; 
    cout << "hi " << full << " " << age;
    return 0;
}