#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int cases;
    cin >> cases;
    for (int _ = 0; _ < cases; ++_)
    {

        int n;
        vector<double> budgeted{};
        double variance{};

        double temp;

        cin >> n;

        for (int i = 0; i < n; ++i)
        {
            cin >> temp;
            budgeted.push_back(temp);
        }

        for (int i = 0; i < n; ++i)
        {
            cin >> temp;
            variance += (temp - budgeted[i]);
        }

        cout << fixed << setprecision(2) << round((variance / (double)n) * 100.00) / 100.00 << '\n';
    }
}