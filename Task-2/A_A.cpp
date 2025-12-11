#include <iostream>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int score = 0;
    string a = "";

    for (int i = 0; i < n; i++)
    {
      if (a.find(s[i]) == string::npos)
      {
        score += 2;
        a += s[i];
      }
      else
      {
        score++;
      }
    }

    cout << score << endl;
  }
}
