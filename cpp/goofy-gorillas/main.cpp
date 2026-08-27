#include <iostream>

using namespace std;

int main() {
    int cases = 0;
    cin >> cases;
    for (int _ = 0; _ < cases; ++_) {

        string one;
        string two;

        cin >> one >> two;

        string result = one == two ? "true" : "false";
        
        cout << result << '\n';
    }
}