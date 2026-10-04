#include <bits/stdc++.h>

using namespace std;

int main()
{
    int cases = 0;
    cin >> cases;
    cin.ignore(1000, '\n');
    for (int _ = 0; _ < cases; ++_)
    {

        int x, y;
        cin >> x >> y;
        cin.ignore(1000, '\n');

        vector<string> good(x);

        string temp;

        for (int i = 0; i < x; ++i)
        {
            getline(cin, good[i]);
        }

        for (int i = 0; i < y; ++i)
        {
            getline(cin, temp);
            auto it = find(good.begin(), good.end(), temp);
            if (it != good.end())
            {
                int index = distance(good.begin(), it);
                good.erase(good.begin() + index);
            }
        }

        std::sort(good.begin(), good.end(), [](const std::string &a, const std::string &b)
                  { return std::lexicographical_compare(
                        a.begin(), a.end(),
                        b.begin(), b.end(),
                        [](unsigned char ch1, unsigned char ch2)
                        {
                            return std::tolower(ch1) < std::tolower(ch2);
                        }); });

        for (const string &s : good)
        {
            cout << s << '\n';
        }
    }
}
