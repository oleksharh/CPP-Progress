#include <iostream>

using namespace std;

int main() {
    char c = 'x';
    int i1 = c;
    int i2 = c + 1000;
    // double d = i2 + 7.3;
    cout << c << endl << i1 << endl << i2 << endl << endl;

    auto g =5;
    double d = 0;
    while (cin>>d) {              
        int i = d;                  
        char c = i;                 
        cout << "d==" << d               
            << " i=="<< i  
            << " c==" << c
            << " char(" << c << ")\n";
    }
    return 0;
}