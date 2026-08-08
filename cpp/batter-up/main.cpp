#include <iostream>
#include <sstream>
#include <vector>
#include <numeric>
#include <iomanip>

int main() {
    int cases;
    std::cin >> cases;
    
    for (int _ = 0; _ < cases; ++_) {
        std::string name;
        std::string line;

        std::cin >> line;

        std::stringstream ss(line);

        std::getline(ss, name, ':'); 

        std::string batting;
        std::vector<int> battings;    
        
        while (getline(ss, batting, ',')){
            if (batting == "K") {
                battings.push_back(0);
            } else if (batting == "1B") {
                battings.push_back(1);
            } else if (batting == "2B") {
                battings.push_back(2);
            } else if (batting == "3B") {
                battings.push_back(3);
            } else if (batting == "HR") {
                battings.push_back(4);
            }
        }

        if (battings.empty()) {
            std::cout << name << "=" << "0.000" << "\n";
            continue;
        }

        int sum = std::accumulate(battings.begin(), battings.end(), 0);
        int size = battings.size();
        double slg = (double) sum / size;

        
        std::cout << name << "=" << std::fixed << std::setprecision(3) << slg << "\n";
        
    }
}
