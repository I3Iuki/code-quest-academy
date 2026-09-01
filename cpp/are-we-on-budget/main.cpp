#include <iostream>
#include <vector>
#include <iomanip>
#include <numeric>

using namespace std;

int main()
{
    int cases = 0;
    cin >> cases;
    for (int _ = 0; _ < cases; ++_)
    {

        int n;
        vector<double> budgeted;
        vector<double> cost;
        vector<double> variances;

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
            cost.push_back(temp);
        }

        for (int i = 0; i < n; ++i)
        {
            variances.push_back(cost[i] - budgeted[i]);
        }

        cout << fixed << setprecision(2) << (accumulate(variances.begin(), variances.end(), 0.0) / (double)n) << '\n';
    }
}