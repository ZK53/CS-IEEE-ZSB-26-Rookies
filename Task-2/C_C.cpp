#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  while (n--)
  {
    string s;
    cin >> s;
    int l = s.length();
    if (l <= 10)
    {
      cout << s << endl;
    }
    else
    {
      cout << s[0] << s.length() - 2 << s[l - 1] << endl;
    }
  }
}
