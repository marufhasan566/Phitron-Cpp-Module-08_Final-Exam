#include <bits/stdc++.h>
using namespace std;

string replaceString(string S, string X)
{
    int xLen = X.length();
    int sLen = S.length();
    string result;

    for (int i = 0; i < sLen;)
    {
        if (S.substr(i, xLen) == X)
        {
            result += '$';
            i += xLen;
        }
        else
        {
            result += S[i];
            i++;
        }
    }

    return result;
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        string S, X;
        cin >> S >> X;

        string modifiedS = replaceString(S, X);
        cout << modifiedS << endl;
    }

    return 0;
}
