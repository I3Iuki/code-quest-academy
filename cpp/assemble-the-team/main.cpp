#include <iostream>
#include <utility>
#include <algorithm>
#include <sstream>
#include <deque>

using namespace std;

int main()
{
    int cases = 0;
    cin >> cases;
    cin.ignore(1000, '\n');
    for (int _ = 0; _ < cases; ++_)
    {

        deque<pair<char, int>> agents;

        string line;
        getline(cin, line);

        stringstream ss(line);

        string temp;
        while (ss >> temp)
        {
            stringstream agent(temp);
            char woo;
            char id;
            int score;

            agent >> id >> woo >> score;

            agents.emplace_back(id, score);
        }

        sort(agents.begin(), agents.end(), [](const pair<char, int> &a, const pair<char, int> &b)
             {
            if (a.second == b.second) {
                return a.first < b.first;
            }
            return a.second < b.second; });

        deque<pair<char, int>> longest;
        deque<pair<char, int>> window;
        window.push_back(agents[0]);
        longest.push_back(agents[0]);

        for (int i = 1; i < agents.size(); ++i)
        {
            window.push_back(agents[i]);

            while (window.back().second - window.front().second > 10)
            {
                window.pop_front();
            }
            if (window.size() > longest.size())
            {
                longest = window;
            }
            else if (window.size() == longest.size())
            {
                deque<pair<char, int>> sortedLongest = longest;
                deque<pair<char, int>> sortedWindow = window;
                sort(sortedLongest.begin(), sortedLongest.end(), [](const pair<char, int> &a, const pair<char, int> &b)
                     {
                    if (a.first == b.first) {
                        return a.second < b.second;
                    }
                    return a.first < b.first; });
                sort(sortedWindow.begin(), sortedWindow.end(), [](const pair<char, int> &a, const pair<char, int> &b)
                     {
                    if (a.first == b.first) {
                        return a.second < b.second;
                    }
                    return a.first < b.first; });
                for (int j = 0; j < sortedLongest.size(); ++j)
                {
                    if (sortedLongest[j].first > sortedWindow[j].first)
                    {
                        longest = window;
                        break;
                    }
                }
            }
        }

        sort(longest.begin(), longest.end(), [](const pair<char, int> &a, const pair<char, int> &b)
             {
            if (a.first == b.first) {
                return a.second < b.second;
            }
            return a.first < b.first; });

        bool first = true;
        for (int i = 0; i < longest.size(); ++i)
        {
            if (!first)
            {
                cout << ' ';
            }
            first = false;
            cout << longest[i].first;
        }
        cout << '\n';
    }
}
