#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;

    cin >> n;

    while (n--)
    {
        string word;

        cin >> word;

        // Condition to check the lenght and print the abbrevation
        if (word.length() > 10)
        {
            cout << word[0] + to_string(word.length() - 2) + word[word.length() - 1] << endl;
        }
        else
        {
            cout << word << endl;
        }
    }

    return 0;
}