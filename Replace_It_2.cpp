#include <bits/stdc++.h>
using namespace std;

void replace(string &str, string old_str, string new_str)
{
  size_t pos = 0;
  while ((pos = str.find(old_str, pos)) != string::npos)
  {
    str.replace(pos, old_str.length(), new_str);
    pos += new_str.length();
  }
}

int main()
{
  int t;
  cin >> t;

  for (int i = 0; i < t; i++)
  {
    string s, x;
    cin >> s >> x;

    replace(s, x, "$");

    cout << s << endl;
  }

  return 0;
}
