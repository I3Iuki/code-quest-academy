#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    int cases = 0;
    cin >> cases;
    cin.ignore(1000, '\n');
    for (int _ = 0; _ < cases; ++_)
    {

        string s;
        cin >> s;

        int sum{};

        for (int i = 0; i < 9; ++i)
        {
            sum += static_cast<int>(s[i] - '0') * (10 - i);
        }

        int x = ceil(static_cast<double>(sum) / static_cast<double>(11)) * 11;
        int y = x - sum;

        if (y == (s[9] == 'X' ? 10 : static_cast<int>(s[9] - '0')))
        {
            cout << "VALID\n";
        }
        else
        {

            cout << "INVALID\n";
        }
    }
}