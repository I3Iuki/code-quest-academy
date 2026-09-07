#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main()
{
    int cases = 0;
    cin >> cases;
    cin.ignore(1000, '\n');
    for (int _ = 0; _ < cases; ++_)
    {

        int n;
        cin >> n;
        string temp;

        unordered_map<string, int> yeah;

        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            if (yeah.find(temp) != yeah.end())
            {
                yeah[temp]++;
            }
            else
            {
                yeah[temp] = 1;
            }
        }

        string rank;
        cin >> rank;
        cout << yeah[rank] << '\n';
    }
}