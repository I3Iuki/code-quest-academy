#include <iostream>
#include <unordered_map>
#include <vector>
#include <cmath>

using namespace std;

struct Printer
{
    char id;
    double density;
    double mass;

    Printer(char a, double b, double c) : id(a), density(b), mass(c) {};
};

struct Job
{
    char use;
    int volume;
    double infill;

    Job(char a, int b, double c) : use(a), volume(b), infill(c) {};
};

int main()
{
    int cases = 0;
    cin >> cases;
    cin.ignore(1000, '\n');
    for (int _ = 0; _ < cases; ++_)
    {

        unordered_map<char, Printer> available;
        vector<Job> jobs;

        int n, p;
        cin >> n >> p;

        for (int i = 0; i < n; ++i)
        {
            char x;
            double y, z;
            cin >> x >> y >> z;

            available.emplace(x, Printer(x, y, z));
        }

        for (int i = 0; i < p; ++i)
        {
            char x;
            int y;
            double z;
            cin >> x >> y >> z;

            jobs.emplace_back(x, y, z);
        }

        for (const Job &job : jobs)
        {
            Printer printer = available.at(job.use);
            double needed = job.volume * job.infill * printer.density;

            cout << floor(printer.mass / needed) << '\n';
        }
    }
}