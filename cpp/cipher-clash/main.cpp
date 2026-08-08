#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

int main() {
    int cases;
    cin >> cases;
    cin.ignore(1000, '\n');

    for (int _ = 0; _ < cases; ++_) {
        string line;
        getline(cin, line);
        stringstream ss(line);

        char temp;
        
        int x,y;
        string senone;
        string sentwo;

        ss >> temp >> x >> temp >> y >> temp;

        getline(ss, senone, '"');
        getline(ss, senone, '"');
        getline(ss, sentwo, '"');
        getline(ss, sentwo, '"');

        
        stringstream temp1(senone);
        stringstream temp2(sentwo);

        string one, two;

        for (int i = 0; i < x; ++i) {
            temp1 >> one;
        }

        for (int i = 0; i < y; ++i) {
            temp2 >> two;
        }
        
        if (one.size() != two.size()) {
            cout << "Intercepted" << '\n';
            continue;
        } 
        
        sort(one.begin(), one.end());
        sort(two.begin(), two.end());


        if (one != two) {
            cout << "Intercepted" << '\n';
            continue;
        } else {
            cout << "Verified" << '\n';
        }

    }
}

// after this try splitting a sentence into a vector using a sliding window algorithm!!!
// 2
// [6,8] "The missile defense system requires secure protocols" "Specific rules must be followed during the rescue mission"
// [6,5] "The satellite must be launched into orbit tonight" "Their mission includes monitoring the robot movement"