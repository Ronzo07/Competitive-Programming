#include <iostream>
using namespace std;

void weirdAlghorithm(int long long n)
{
    cout << n << "  ";

    if (n == 1) 
        return;

    else if (n % 2 == 0)
        return weirdAlghorithm(n / 2);

    else if (n % 2 == 1) 
        return weirdAlghorithm(n * 3 + 1);
}


int main()
{
    int long long n; cin >> n;
    weirdAlghorithm(n);
    cout << "\n";
    return 0;
}