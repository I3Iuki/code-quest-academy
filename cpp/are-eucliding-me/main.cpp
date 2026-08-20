#include <iostream>

using namespace std;

bool calc(int a, int b)
{
    if (b > a)
    {
        int temp = a;
        a = b;
        b = temp;
    }

    cout << a << '-' << b << '=' << a - b << '\n';

    if (a - b == 0)
    {
        if (a == b && a == 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        int temp = a;
        a = b;
        b = temp - b;
        return calc(a, b);
    }
}

int main()
{
    int cases;
    cin >> cases;
    for (int _ = 0; _ < cases; ++_)
    {

        int a, b;
        char x;

        cin >> a >> x >> b;

        if (calc(a, b))
        {
            cout << "COPRIME\n";
        }
        else
        {
            cout << "NOT COPRIME\n";
        }
    }
}
