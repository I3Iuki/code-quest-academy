#include <iostream>
#include <sstream>
#include <string>
#include <cmath>
#include <map>

using namespace std;

struct Printer {
    char id;
    double density;
    double mass;
};

int main() {
    int cases;
    cin >> cases;

    
    for (int _ = 0; _ < cases; ++_) {
        int n, p;
        cin >> n >> p;
        
        map<char, Printer> availablePrinters;

        for (int i = 0; i < n; ++i) {
            char id;
            double density;
            double mass;

            cin >> id >> density >> mass;

            availablePrinters[id] = {id, density, mass};
        }

        for (int i = 0; i < p; ++i) {
            char id;
            double volume;
            double infill;

            cin >> id >> volume >> infill;
            
            double needed = volume * infill * availablePrinters[id].density;

            int result = availablePrinters[id].mass / needed;

            cout << result << '\n';

        }
    }
}

