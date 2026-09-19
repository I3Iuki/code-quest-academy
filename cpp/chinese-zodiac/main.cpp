#include <iostream>
#include <string>
#include <array>
#include <cmath>

using namespace std;

array<string, 5> elements = {"Wood", "Fire", "Earth", "Metal", "Water"};
array<string, 12> animals = {
    "Rat",
    "Ox",
    "Tiger",
    "Rabbit",
    "Dragon",
    "Snake",
    "Horse",
    "Goat",
    "Monkey",
    "Rooster",
    "Dog",
    "Pig"};

int main()
{
    int cases = 0;
    cin >> cases;
    cin.ignore(1000, '\n');
    for (int _ = 0; _ < cases; ++_)
    {

        int year;
        cin >> year;
        cout << year << ' ';

        if (year % 2 == 0)
        {
            cout << "Yang" << ' ';
        }
        else
        {
            cout << "Yin" << ' ';
        }

        cout << elements[floor(((year - 4) % 10) / 2)] << ' ';

        cout << animals[(year - 4) % 12] << '\n';
    }
}