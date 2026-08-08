#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int cases;
    cin >> cases;
    cin.ignore();

    for (int _ = 0; _ < cases; ++_) {
        vector<int> arr;
        
        string line;
        getline(cin, line);
        stringstream ss(line);
        
        int temp;

        while (ss >> temp) {
            arr.push_back(temp);
        }

        cout << *max_element(arr.begin(), arr.end()) << '\n';
    }
}