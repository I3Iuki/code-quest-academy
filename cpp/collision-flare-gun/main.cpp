#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int cases = 0;
    cin >> cases;
    cin.ignore(1000, '\n');
    for (int _ = 0; _ < cases; ++_) {

        char temp;
        double v1, v2, m1, m2;
        cin >> v1 >> temp >> m1 >> temp >> v2 >> temp >> m2;

        cout << fixed << setprecision(2) << ((m1 * v1) + (m2 * v2)) / (m1 + m2) << '\n';

    }
}