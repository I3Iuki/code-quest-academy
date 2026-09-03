#include <iostream>
#include <vector>
#include <utility>
#include <cmath>

using namespace std;

int main()
{
    int cases = 0;
    cin >> cases;
    cin.ignore(1000, '\n');
    for (int _ = 0; _ < cases; ++_)
    {

        int r, w, h;
        cin >> r >> w >> h;
        w++;
        h++;

        //  the origin is the bottom left
        vector<pair<int, int>> good;

        for (int i = 0; i < w; ++i)
        {
            for (int j = 0; j < h; ++j)
            {
                double hyp = sqrt(pow(i, 2) + pow(j, 2));
                if (hyp > (double)r)
                {
                    good.emplace_back(i, j);
                }
            }
        }

        for (const pair<int, int> &p : good)
        {
            cout << p.first << ',' << p.second << '\n';
        }
    }
}