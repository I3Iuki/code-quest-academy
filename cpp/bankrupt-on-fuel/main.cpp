#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <iterator>
#include <numeric>

using namespace std;

int main()
{
    int cases = 0;
    cin >> cases;
    cin.ignore(1000, '\n');
    for (int _ = 0; _ < cases; ++_)
    {

        int fuelRemaining, n;

        cin >> fuelRemaining >> n;

        // capacities of each container
        vector<int> caps(n, 0);

        // vector of given fuel amounts
        vector<int> given(n, 0);

        // amount of unfilled containers
        int unfilled = n;

        // how much capacity is left in between all containers
        int capLeft = 0;

        for (int i = 0; i < n; ++i)
        {
            cin >> caps[i];
        }

        for (const auto &cap : caps)
        {
            capLeft += cap;
        }

        bool first = true;
        while (true)
        {
            auto it = min_element(caps.begin(), caps.end());
            auto fillAmount = *it;
            int indexToFill = distance(caps.begin(), it);

            if (fillAmount * unfilled > fuelRemaining)
            {
                // if there's not enough fuel
                // distribute

                for (int i = 0; i < n; ++i)
                {
                    if (first)
                    {
                        first = false;
                    }
                    else
                    {
                        cout << ' ';
                    }

                    if (caps[i] == INT_MAX)
                    {
                        cout << given[i];
                    }
                    else
                    {
                        if (fuelRemaining % unfilled == 0)
                        {
                            cout << fuelRemaining / unfilled;
                        }
                        else
                        {
                            int g = gcd(fuelRemaining, unfilled);
                            if (g != 1)
                            {
                                cout << fuelRemaining / g << '/' << unfilled / g;
                            }
                            else
                            {
                                cout << fuelRemaining << '/' << unfilled;
                            }
                        }
                    }
                }

                cout << '\n';

                break;
            }

            given[indexToFill] = fillAmount;
            fuelRemaining -= fillAmount;
            unfilled--;
            capLeft -= fillAmount;
            caps[indexToFill] = INT_MAX;
        }
    }
}

// 1. find smallest capacity
// 2. see if smallest is enough to fill up remaining containers
// 3. if not, take previous ((previous fill amount * currently unfilled) + fuelRemaining) / currently unfilled
// 4. assign that to given[i]

// 1
// 203 3
// 101 50 300