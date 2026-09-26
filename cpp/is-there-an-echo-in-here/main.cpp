#include <iostream>
#include <string>

using namespace std;

int main() {
    int cases = 0;
    cin >> cases;
    cin.ignore(1000, '\n');
    for (int _ = 0; _ < cases; ++_) {

        string line;
        getline(cin, line);

        cout << line << '\n';
        cout << line << '\n';
    }
}