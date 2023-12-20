#include <iostream>
#include <string>

using namespace std;

int main()
{
    string DNA; cin >> DNA;
    int res = 0;
    int end = DNA.length();
    int count = 1;
    for (int  i = 1; i < end; i++)
    {
        if (DNA[i] == DNA[i - 1])
        {
            count++;
        }
        else 
        {
            res = max(res, count);
            count = 1;
        }
    }
    res = max(res, count);
    cout << res << '\n';
    return 0;
}