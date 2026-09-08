#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    int cases = 0;
    cin >> cases;
    cin.ignore(1000, '\n');
    for (int _ = 0; _ < cases; ++_) {

        string temp;
        
        int speed;
        bool bday;
        int a = 60, b = 80; 
        
        cin >> speed >> temp;

        istringstream(temp) >> boolalpha >> bday;
        
        if (bday) {
            a += 5;
            b += 5;
        } 

        if (speed <= a) {
            cout << "no ticket\n";
        } else if (speed <= b) {
            cout << "small ticket\n";
        } else {
            cout << "big ticket\n";
        }

    }
}