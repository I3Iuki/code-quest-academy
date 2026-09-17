#include <iostream>
#include <deque>
#include <string>
#include <algorithm>

using namespace std;

deque<char> alphabet = {
    'a',
    'b',
    'c',
    'd',
    'e',
    'f',
    'g',
    'h',
    'i',
    'j',
    'k',
    'l',
    'm',
    'n',
    'o',
    'p',
    'q',
    'r',
    's',
    't',
    'u',
    'v',
    'w',
    'x',
    'y',
    'z'};

int main()
{
    int cases = 0;
    cin >> cases;
    cin.ignore(1000, '\n');
    for (int _ = 0; _ < cases; ++_)
    {
        deque<char> shifted = {
            'a',
            'b',
            'c',
            'd',
            'e',
            'f',
            'g',
            'h',
            'i',
            'j',
            'k',
            'l',
            'm',
            'n',
            'o',
            'p',
            'q',
            'r',
            's',
            't',
            'u',
            'v',
            'w',
            'x',
            'y',
            'z'};

        int shift;
        cin >> shift;
        cin.ignore(1000, '\n');

        for (int i = 0; i < shift; i++)
        {
            char temp = shifted.front();
            shifted.pop_front();
            shifted.push_back(temp);
        }

        string line;
        getline(cin, line);

        string ok = "";

        for (char c : line)
        {
            if (isalpha(c))
            {
                auto it = find(shifted.begin(), shifted.end(), c);
                int index = distance(shifted.begin(), it);

                ok += alphabet[index];
            }
            else if (c == ' ')
            {
                ok += ' ';
            }
        }

        cout << ok << '\n';
    }
}