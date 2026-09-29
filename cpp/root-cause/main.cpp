#include <bits/stdc++.h>

using namespace std;

unordered_map<int, vector<int>> graph;
vector<int> bad;
int root;

int recurse(int cur)
{
    int count = 0;

    for (int i = 0; i < graph[cur].size(); ++i)
    {
        count += recurse(graph[cur][i]);
    }

    if (find(bad.begin(), bad.end(), cur) != bad.end())
    {
        count++;
    }

    if (count == bad.size())
    {
        root = cur;
        return 0;
    }
    else
    {
        return count;
    }
}

int main()
{
    int cases = 0;
    cin >> cases;
    for (int _ = 0; _ < cases; ++_)
    {

        // create graph

        int n;
        cin >> n;
        cin.ignore(1000, '\n');

        string line;
        int temp;

        for (int i = 0; i < n; i++)
        {
            getline(cin, line);
            stringstream ss(line);

            int parent;
            ss >> parent;
            graph[parent] = {};

            while (ss >> temp)
            {
                graph[parent].push_back(temp);
            }
        }

        getline(cin, line);
        stringstream ss(line);

        while (ss >> temp)
        {
            bad.push_back(temp);
        }

        recurse(1);

        cout << root << '\n';

        graph.clear();
        bad.clear();
        root = 0;
    }
}

