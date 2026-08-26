#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <cmath>

using namespace std;

int main()
{
    int cases = 0;
    cin >> cases;
    cin.ignore();
    for (int _ = 0; _ < cases; ++_)
    {

        int l;
        int h;
        int n;
        int height;
        vector<int> lengths;

        string line;
        getline(cin, line);

        stringstream ss(line);

        char temp;

        ss >> l >> temp >> h >> height >> n;

        string yeah;

        for (int i = 0; i < n; i++) {
            int x;
            ss >> x;

            lengths.push_back(x);
        }

        double sum = 0;

        for (int num : lengths) {
            sum += num * height;
        }

        double result = ceil(sum / (l*h));

        cout << result << '\n';
    }
}
