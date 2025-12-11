#include <iostream>
#include <set>
using namespace std;

int main()
{
  int n;
  cin >> n;
  string s;
  cin >> s;
  if (n < 26)
  {
    cout << "NO" << endl;
    return 0;
  }

  set<char> a;
  for (int i = 0; i < n; i++)
  {
    a.insert(tolower(s[i]));
  }

  cout << (a.size() == 26 ? "YES" : "NO");
}
