#include <bits/stdc++.h>

struct Letter
{
    char character;
    int freq, first_idx;
};

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int cases = 0;
    cin >> cases;
    cin.ignore(1000, '\n');
    for (int _ = 0; _ < cases; ++_)
    {

        string line;
        getline(cin, line);

        unordered_map<char, Letter> letters;

        int words = 1;
        int characters = line.size();
        string hyphens = "";

        for (int i = 0; i < line.size(); ++i)
        {
            char c = line[i];

            if (letters.count(c))
            {
                letters[c].freq++;
            }
            else
            {
                Letter letter;
                letter.character = c;
                letter.freq = 1;
                letter.first_idx = i;
                letters[c] = letter;
            }

            if (c == ' ')
                words++;

            hyphens += '-';
        }

        vector<Letter> arr;

        for (const auto &[first, second] : letters)
            arr.push_back(second);

        sort(arr.begin(), arr.end(), [](const Letter &a, const Letter &b)
             {
            if (a.freq != b.freq) {
                return a.freq > b.freq;
            } else {
                return a.first_idx < b.first_idx;
            } });

        cout << line << '\n';
        cout << hyphens << '\n';
        cout << "CHARACTERS: " << characters << '\n';
        cout << "WORDS: " << words << '\n';
        for (const auto &letter : arr)
            cout << letter.character << ": " << letter.freq << '\n';

        // REMEMBER TO CLEAN UP OUTPUT FOR SUBMISSION!!!
    }
    return 0;
}