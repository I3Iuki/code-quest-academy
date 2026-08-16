#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <unordered_map>
#include <algorithm>
#include <iterator>

using namespace std;

struct Ship {
    string name;
    char c;
    int x, y;
};

int main() {
    int cases;
    cin >> cases;

    for(int _ = 0; _ < cases; ++_) {
        int n;
        cin >> n;
        cin.ignore(1000, '\n');

        unordered_map<string,Ship> ships;      
        
        for (int i = 0; i < n; ++i) {
            string line;
            getline(cin, line);
            
            stringstream ss(line);
            
            char temp;
            
            string name;
            char c;
            int x,y;
            getline(ss, name, '_');
            ss >> c >> temp >> x >> temp >> y;
            
            ships[name] = Ship{name, c, x, y};
        }
        
        while (!ships.empty()) {
            vector<string> closests;
            
            for (const auto &[name, ship] : ships) {
                if (closests.empty()) {
                    closests.push_back(name);
                } else if (ship.x == ships[closests[0]].x) {
                    closests.push_back(name);
                } else if (ship.x < ships[closests[0]].x) {
                    closests.clear();
                    closests.push_back(name);
                }
            }

            
            string closest = closests[0];

            if (closests.size() > 1) {    
                for (string name : closests) {
                    if (ships[name].y > ships[closest].y) {
                        closest = name;
                    } 
                }
            } 
            cout << "Destroyed Ship: " << closest << " xLoc: " << ships[closest].x << '\n';
            ships.erase(closest);

            for (auto& [name, ship] : ships) {
                if (ship.c == 'A') {
                    ship.x -= 10;
                } else if (ship.c == 'B') {
                    ship.x -= 20;
                } else if (ship.c == 'C') { 
                    ship.x -= 30;
                }
            }
        }
    }
}

