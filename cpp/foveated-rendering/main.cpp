#include <iostream>
#include <vector>
#include <cmath>

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

        vector<vector<int>> grid(20, vector<int>(20, 10));

        for (int i = x - 2; i <= x + 2; ++i)
        {
            if (i < 0 || i > 19)
            {
                continue;
            }
            else if (i == x - 2 || i == x + 2)
            {
                for (int j = y - 2; j <= y + 2; ++j)
                {
                                if (j < 0 || j > 19)
            {
                continue;
            }

                    
                    grid[i][j] = 25;
                }
            }
            else if (i == x - 1 || i == x + 1)
            {
                for (int j = y - 2; j <= y + 2; ++j)
                {
                                if (j < 0 || j > 19)
            {
                continue;
            }

                    if (j == y - 2 || j == y + 2)
                    {
                        grid[i][j] = 25;
                    }
                    else
                    {
                        grid[i][j] = 50;
                    }
                }
            }
            else
            {
                for (int j = y - 2; j <= y + 2; ++j)
                {
                                if (j < 0 || j > 19)
            {
                continue;
            }

                    if (j == y)
                    {
                        grid[i][j] = 100;
                    }
                    else
                    {
                        grid[i][j] = 75 - (abs(y - j) * 25);
                    }
                }
            }
        }

        for (const auto &row : grid)
        {
            bool first = true;
            for (const auto &num : row)
            {
                if (!first)
                {
                    cout << ' ';
                }
                first = false;
                cout << num;
            }
            cout << '\n';
        }
    }
}