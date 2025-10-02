#include <bits/stdc++.h>

using namespace std;

int main()
{
    int w;

    cin >> w;

    // Here we check if the weight is even and greater than 2,
    // as the problem states that the watermelon must be divided into two parts (can be unequal),
    // each of which must be of even weight.
    // and the smallest even weight that can be divided into two even parts is 4 (2 + 2).
    if (w % 2 == 0 && w > 2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}