#include <iostream>
#include <numbers>
#include <cmath>
#include <iomanip>

const double PI = acos(-1.0);
const double eRadius = (40075.0 / PI) / 2.0; 

int main() {
    int cases;
    std::cin >> cases;

    std::cout << std::fixed << std::setprecision(1);
    
    for (int i = 0; i < cases; i++) {
        double a;
        std::cin >> a;
        std::cout << ((((eRadius + a) * 2) * PI) * 100.0) / 100.0 << "\n";
    }
}