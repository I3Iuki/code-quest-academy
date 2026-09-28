#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>
#include <string>

using namespace std;

vector<char> alphabet = {
    'A',
    'B',
    'C',
    'D',
    'E',
    'F',
    'G',
    'H',
    'I',
    'J',
    'K',
    'L',
    'M',
    'N',
    'O',
    'P',
    'Q',
    'R',
    'S',
    'T',
    'U',
    'V',
    'W',
    'X',
    'Y',
    'Z',
};

int main()
{
    int cases = 0;
    cin >> cases;
    cin.ignore(1000, '\n');
    for (int _ = 0; _ < cases; ++_)
    {

        string tempk;
        string templ;
        getline(cin, tempk);
        getline(cin, templ);

        //  Uppercase 'A' = 65

        string key = "";
        string line = "";
        
        for (char& c : tempk) {
            if (isalpha(static_cast<unsigned char>(c))) {
                key += toupper(static_cast<unsigned char>(c));
            }
        }
        
        for (char& c : templ) {
            if (isalpha(static_cast<unsigned char>(c))) {
                line += toupper(static_cast<unsigned char>(c));
            }
        }
        
        key += line;

        for (int i = 0; i < line.size(); ++i)
        {
            int moveKey = static_cast<int>(key[i]) - 65;
            int moveLine = static_cast<int>(line[i]) - 65;

            int index = moveLine;

            for (int j = 0; j < moveKey; ++j)
            {
                index = (index + 1) % alphabet.size();
            }

            line[i] = alphabet[index];
        }

        cout << line << '\n';
    }
}