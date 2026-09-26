#include <iostream>
#include <deque>
#include <string>
#include <sstream>
#include <algorithm>
#include <utility>

using namespace std;

int main()
{
    int cases = 0;
    cin >> cases;
    cin.ignore(1000, '\n');
    for (int _ = 0; _ < cases; ++_)
    {

        string temps;
        char tempc;

        string line;
        getline(cin, line);

        stringstream ss(line);

        deque<pair<char, int>> agents;

        while (ss >> temps)
        {
            stringstream asdf(temps);
            char a;
            int b;
            asdf >> a >> tempc >> b;
            agents.emplace_back(a, b);
        }

        sort(agents.begin(), agents.end(), [](const pair<int, int> &a, const pair<int, int> &b)
             { return a.second < b.second; });

        deque<pair<char, int>> window = {};
        deque<pair<char, int>> best;

        for (int i = 0; i < agents.size(); ++i)
        {
            window.push_back(agents[i]);

            while (window.back().second - window.front().second > 10)
            {
                window.pop_front();
            }

            if (window.size() > best.size())
            {
                best = window;
            }
            else if (window.size() == best.size())
            {
                deque<pair<char, int>> sortedWindow = window;
                deque<pair<char, int>> sortedBest = best;

                sort(sortedWindow.begin(), sortedWindow.end(), [](const pair<char, int> &a, const pair<char, int> &b)
                     { return a.first < b.first; });
                sort(sortedBest.begin(), sortedBest.end(), [](const pair<char, int> &a, const pair<char, int> &b)
                     { return a.first < b.first; });

                int i = 0;
                while (sortedWindow[i].first == sortedBest[i].first)
                {
                    i++;
                }

                if (sortedWindow[i].first < sortedBest[i].first)
                {
                    best = deque<pair<char, int>>(window.begin(), window.end());
                }
            }
        }

        sort(best.begin(), best.end(), [](const pair<char, int> &a, const pair<char, int> &b)
             { return a.first < b.first; });

        bool first = true;

        for (const auto &agent : best)
        {
            if (!first)
            {
                cout << ' ';
            }
            first = false;
            cout << agent.first;
        }

        cout << '\n';
    }
}