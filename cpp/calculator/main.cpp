#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int cases = 0;
    cin >> cases;
    cin.ignore(1000, '\n');
    for (int _ = 0; _ < cases; ++_)
    {

        double a, b;
        char o;

        cin >> a >> o >> b;

        cout << fixed << setprecision(1);

        switch (o)
        {
        case '+':

            cout << a + b + 1e-9 << ' ' << b + a + 1e-9 << '\n';
            break;

        case '-':

            cout << a - b + 1e-9 << ' ' << b - a + 1e-9 << '\n';
            break;

        case '*':

            cout << a * b + 1e-9 << ' ' << b * a + 1e-9 << '\n';
            break;

        default:
            cout << a / b + 1e-9 << ' ' << b / a + 1e-9 << '\n';
            break;
        }
    }
}