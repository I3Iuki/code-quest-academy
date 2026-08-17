#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

struct State
{
    int seats;
    string abbr;
    unsigned int population;

    State(string a, unsigned int b) : seats(1), abbr(a), population(b) {};
};

double getMultiplier(int seats)
{
    double x = seats + 1;
    return 1.0 / sqrt(x * (x - 1));
}

int main()
{
    int cases = 0;
    cin >> cases;
    for (int _ = 0; _ < cases; ++_)
    {

        vector<State> states;
        vector<double> priorities;
        states.reserve(50);
        priorities.reserve(50);

        for (int i = 0; i < 50; ++i)
        {
            string abbr;
            unsigned int population;
            cin >> abbr >> population;

            states.emplace_back(abbr, population);
        }

        sort(states.begin(), states.end(), [](const State &a, const State &b)
            { 
                return a.abbr < b.abbr; 
            });

            for (State &state : states)
        {
            unsigned int population = state.population;
            double priority = getMultiplier(state.seats) * population;

            priorities.push_back(priority);
        }

        for (int i = 0; i < 385; ++i)
        {
            auto max = max_element(priorities.begin(), priorities.end());
            int index = distance(priorities.begin(), max);
            State &state = states[index];

            state.seats += 1;

            unsigned int population = state.population;
            double priority = getMultiplier(state.seats) * population;

            priorities[index] = priority;
        }

        for (State state : states)
        {
            cout << state.abbr << ' ' << state.seats << '\n';
        }
    }
}