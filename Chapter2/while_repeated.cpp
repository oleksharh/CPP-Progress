#include <iostream>

using namespace std;

int main() {
    int counter = 0;
    string previous;// previous word; initialized to ""
    string current;// current word
    while (cin>>current) {     // read a stream of words
        if (previous == current) {  // check if the word is the same as last
            ++counter;
            cout << "repeated word: " << current << " " << counter <<'\n';
            if (counter == 2){
                cout<< "stopping here"; 
                break;
            }
        }
        previous = current;
    }
    return 0;
}