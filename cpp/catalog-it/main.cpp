#include <bits/stdc++.h>

using namespace std;

vector<string> top_items;
map<string, set<string>> graph;

void print(const string &cur, int level)
{
    const set<string> &children = graph[cur];

    if (children.size() == 0)
    {
        for (int i = 0; i < level; ++i)
            cout << '-';
        cout << cur << '\n';
        return;
    }

    for (int i = 0; i < level; ++i)
        cout << '-';
    cout << cur << '\n';

    for (const string &child : children)
    {
        print(child, level + 1);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    cin.ignore(1000, '\n');

    for (int i = 0; i < n; ++i)
    {
        string cur, parent;
        getline(cin, cur, ',');
        getline(cin, parent);

        if (parent == "None")
        {
            graph[cur] = {};
            top_items.push_back(cur);
            continue;
        }
        else
        {
            graph[parent].insert(cur);
        }
    }

    sort(top_items.begin(), top_items.end());

    for (const string &thing : top_items)
        print(thing, 0);

    top_items.clear();
    graph.clear();
    // REMEMBER TO CLEAN UP OUTPUT FOR SUBMISSION!!!
    return 0;
}