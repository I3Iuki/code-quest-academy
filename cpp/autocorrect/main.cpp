#include <iostream>
#include <string>
#include <vector>

int main() {
    int cases;
    std::cin >> cases;

    for (int i = 0; i < cases; i++) {
        unsigned int D{};
        unsigned int W{};

        std::cin >> D >> W;

        std::vector<std::string> dict = {};
        std::vector<std::string> misspelled = {};

        for(int i = 0; i < D; i++) {
            std::string temp;
            std::cin >> temp;

            dict.push_back(temp);
        }
        
        for(int i = 0; i < W; i++) {
            std::string temp;
            std::cin >> temp;
    
            misspelled.push_back(temp);
        }        

        for (std::string x : misspelled) {
            std::string currentBestMatch{};
            int yeah{999};
            for (std::string y : dict) {
                int temp{};
                if (x.length() != y.length()) {
                    continue;
                }
                for (size_t i = 0; i < x.length(); i++) {
                    if (x[(int)i] != y[(int)i]) {
                        temp++;
                    }
                }

                if (temp < yeah) {
                    yeah = temp;
                    currentBestMatch = y;
                } 
            }

            std::cout << currentBestMatch << "\n";
        }
    }

}