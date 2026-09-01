#include <iostream>
#include <string>

using namespace std;

int main() {
    int cases = 0;
    cin >> cases;
    cin.ignore(1000, '\n');
    for (int _ = 0; _ < cases; ++_) {

        string s;
        getline(cin, s);

        if (s[s.size() - 2] == ' ' || s[s.size() - 2] == '"')
        {
            cout << "No Letter Found\n";
        } else {
            cout << s[s.size() - 2] << '\n';
        }
    }
}