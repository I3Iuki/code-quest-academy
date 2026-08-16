#include <iostream>
#include <array>
#include <iomanip>

using namespace std;

int main()
{
    int cases = 0;
    cin >> cases;
    for (int _ = 0; _ < cases; ++_)
    {
        double temp;

        array<double, 3> angles = {0, 0, 0};

        for (int i = 0; i < 3; ++i)
        {
            cin >> temp;
            angles[i] = temp;
        }

        for (double &angle : angles)
        {
            double result = angle - 180.00;
            if (result < 0)
            {
                result += 360;
            }
            else if (result == 0)
            {
                angle = 000.00;
            }

            angle = result;
        }

        cout << setfill('0') << fixed << setprecision(2) << setw(6) << angles[0] << ' ' << setw(6) << angles[1] << ' ' << setw(6) << angles[2] << '\n';
    }
}
