#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int cases = 0;
    cin >> cases;
    cin.ignore(1000, '\n');
    
    for (int _ = 0; _ < cases; ++_)
    {

        bool isFriendly;
        string line;
        int n;
        vector<int> times;

        int a, b;
        char c;

        cin >> line >> n;

        isFriendly = (line == "TRUE") ? true : false;

        for (int i = 0; i < n; ++i)
        {
            cin >> a >> c >> b;
            times.push_back((a * 60) + b);
        }



        if (isFriendly)
        {
            cout << "NONE" << '\n';
            continue;
        } else if (n >= 36) {
            cout << "HIGH" << '\n';
            continue;
        }

        // low = 0
        // medium = 1
        // high = 2
        
        int threat = 0;

        if (floor(n / 12) - 1 > 0) {
            threat = floor(n / 12) - 1 < 2 ? floor(n / 12) - 1 : 2;
        }
        
        int continuous = 1;
        int separate = 1;
        for (int i = 1; i < n; ++i)
        {
            int cur = times[i];
            int prev = times[i - 1];
            if (cur - prev == 15)
            {
                continuous++;
            }
            else
            {
                int newThreat = floor(continuous / 4) - 1;

                if (newThreat < 1) {
                    continuous = 1;
                    separate++;
                    continue;
                } else if (newThreat > threat) {
                    threat = newThreat < 2 ? newThreat : 2;
                }
                
                if (newThreat > threat)
                {
                    threat = newThreat;
                }
                
                continuous = 1;
                separate++;
            }
        }

        if (separate >= 4) {
            threat = floor(separate / 4) == 1 ? 1 : 2;
        }

        switch (threat)
        {
        case 0:
            cout << "LOW" << '\n';
            break;

        case 1:
            cout << "MEDIUM" << '\n';
            break;

        default:
            cout << "HIGH" << '\n';
            break;
        }
    }
}