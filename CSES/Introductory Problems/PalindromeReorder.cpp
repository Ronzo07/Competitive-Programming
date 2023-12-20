#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    vector<int> frequency(26, 0);
    string word; cin >> word;
    int n = word.length();

    for (int i = 0; i < n; i++)
    {
        frequency[word[i] - 65] += 1;
    }

    int count = 0;
    char c = ' ';

    for (int i = 0; i < 26; i++)
    {
        if (frequency[i] % 2 == 1)
        {
            count += 1;
            c = i + 65;
        }
    }
    if (count > 1) cout << "NO SOLUTION\n";
    else if (n % 2 == 0 && count == 1) cout << "NO SOLUTION\n";
    else
    {
        if (n % 2 == 0)
        {
            for (int i = 0; i < 26; i++)
            {
                for (int j = 0; j < frequency[i] / 2; j++)
                {
                    cout << char(i + 65);
                }
            }
            for (int i = 25; i >= 0; i--)
            {
                for (int j = 0; j < frequency[i] / 2; j++)
                {
                    cout << char(i + 65);
                }
            }
            cout << '\n';
        }
        
        if (n % 2 == 1)
        {
            for (int i = 0; i < 26; i++)
            {
                for (int j = 0; j < frequency[i] / 2; j++)
                {
                    if (i + 65 != c)
                        cout << char(i + 65);
                }
            }
            for (int i = 0; i < frequency[c - 65]; i++)
            {
                cout << c;
            }
            for (int i = 25; i >= 0; i--)
            {
                for (int j = 0; j < frequency[i] / 2; j++)
                {
                    if (i + 65 != c)
                        cout << char(i + 65);
                }
            }
            cout << '\n';
        }
    }

    return 0;
}