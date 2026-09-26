#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int cases = 0;
    cin >> cases;
    cin.ignore(1000, '\n');
    for (int _ = 0; _ < cases; ++_)
    {

        string line;
        getline(cin, line);
        reverse(line.begin(), line.end());

        cout
            << line << '\n';
    }
}