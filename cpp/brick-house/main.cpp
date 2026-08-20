#include <iostream>

using namespace std;

int main()
{
    int cases = 0;
    cin >> cases;
    for (int _ = 0; _ < cases; ++_)
    {

        int x, y, z;
        cin >> x >> y >> z;
        bool a = true;

        while (z)
        {
            if (z >= 5 && y)
            {
                y--;
                z -= 5;
            }
            else if (z > 0 && x != 0)
            {
                x--;
                z -= 1;
            }
            else
            {
                a = false;
                break;
            }
        }

        cout << boolalpha << a << '\n';
    }
}