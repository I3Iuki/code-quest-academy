#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    int cases = 0;
    cin >> cases;
    cin.ignore(1000, '\n');
    for (int _ = 0; _ < cases; ++_)
    {

        string s;
        getline(cin, s);

        if (isalpha(static_cast<unsigned char>(s[s.size() - 2])))
        {
            cout << s[s.size() - 2] << '\n';
        }
        else
        {
            cout << "No Letter Found\n";
        }
    }
}