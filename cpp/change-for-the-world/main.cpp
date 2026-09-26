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

        char temp;
        double x;
        cin >> temp >> x;
        cout << fixed << setprecision(2) << '$' << x << '\n';

        int cents = x * 100;

        int q = 0, d = 0, n = 0;

        q = cents / 25;
        cents %= 25;
        d = cents / 10;
        cents %= 10;
        n = cents / 5;
        cents %= 5;

        cout << "Quarters=" << q << '\n';
        cout << "Dimes=" << d << '\n';
        cout << "Nickels=" << n << '\n';
        cout << "Pennies=" << cents << '\n';
    }
}