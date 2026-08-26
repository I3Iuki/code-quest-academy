#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

struct part
{
    string name;
    string partNumber;
    string serialNum;

    part(string a, string b, string c) : name(a), partNumber(b), serialNum(c){};
};


int main()
{
    int cases = 0;
    cin >> cases;
    for (int _ = 0; _ < cases; ++_) {
        string line;
        getline(cin, line);
        
        stringstream ss(line);  
    }
}   
