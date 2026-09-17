#include <iostream>
#include <unordered_map>
#include <string>
#include <cctype>

using namespace std;

unordered_map<char, string> codes = {
    {'A', "Alpha"},
    {'B', "Bravo"},
    {'C', "Charlie"},
    {'D', "Delta"},
    {'E', "Echo"},
    {'F', "Foxtrot"},
    {'G', "Golf"},
    {'H', "Hotel"},
    {'I', "India"},
    {'J', "Juliet"},
    {'K', "Kilo"},
    {'L', "Lima"},
    {'M', "Mike"},
    {'N', "November"},
    {'O', "Oscar"},
    {'P', "Papa"},
    {'Q', "Quebec"},
    {'R', "Romeo"},
    {'S', "Sierra"},
    {'T', "Tango"},
    {'U', "Uniform"},
    {'V', "Victor"},
    {'W', "Whiskey"},
    {'X', "Xray"},
    {'Y', "Yankee"},
    {'Z', "Zulu"}};

int main()
{
    int cases = 0;
    cin >> cases;
    cin.ignore(1000, '\n');
    for (int _ = 0; _ < cases; ++_)
    {

        int n;
        cin >> n;
        cin.ignore(1000, '\n');
        for (int p = 0; p < n; p++)
        {
            string line;
            getline(cin, line);

            bool first = true;

            for (char c : line)
            {
                if (isalpha(c))
                {
                    if (!first)
                    {
                        cout << '-';
                    }
                    else
                    {
                        first = false;
                    }
                    cout << codes[toupper(c)];
                }
                else if (c == ' ')
                {
                    cout << ' ';
                    first = true;
                }
                else
                {
                    continue;
                }
            }

            cout << '\n';
        }
    }
}