#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    int cases = 0;
    cin >> cases;
    cin.ignore(1000, '\n');
    for (int _ = 0; _ < cases; ++_)
    {

        char temp;

        int r, c, r1, c1, r2, c2;
        cin >> r >> temp >> c >> r1 >> temp >> c1 >> r2 >> temp >> c2;

        if (r2 > r || c2 > c)
        {
            cout << "1No\n";
            break;
        } else if ((r1 % 2 == c1 % 2) && (r2 % 2 == c2 % 2)) {
            cout << "Yes\n";
        } else if ((r1 % 2 != c1 % 2) && (r2 % 2 != c2 % 2)) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
}
