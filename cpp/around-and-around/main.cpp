#include <iostream>
#include <numbers>
#include <cmath>

double eRadius = (40075 / std::numbers::pi) / 2 

int main() {
    int cases;
    std::cin >> cases;
    for (int i = 0; i < cases; i++) {
        double a;
        std::cin >> a;
        std::cout << (std::round((((eRadius + a) * 2) * std::numbers::pi) * 100.0) / 100);
    }
}