#include <iostream>
using namespace std;

int main()
{
  int t;
  cin >> t;
  string s = "codeforces";
  while (t--)
  {
    char c;
    cin >> c;
    bool inS = false;
    for (int i = 0; i < s.length(); i++)
    {
      if (s[i] == c)
      {
        inS = true;
      }
    }
    cout << (inS ? "YES\n" : "NO\n");
  }
}
