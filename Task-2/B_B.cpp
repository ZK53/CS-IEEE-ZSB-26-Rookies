#include <iostream>
using namespace std;

int main()
{
  string s;
  cin >> s;

  bool allUpper = true;
  bool upperNotFirst = true;

  for (int i = 0; i < s.length(); i++)
  {
    if (islower(s[i]))
    {
      allUpper = false;
    }
    if (i != 0 && !isupper(s[i]))
    {
      upperNotFirst = false;
    }
  }

  if (allUpper || upperNotFirst)
  {
    for (int i = 0; i < s.length(); i++)
    {
      if (islower(s[i]))
        s[i] = toupper(s[i]);
      else
        s[i] = tolower(s[i]);
    }
  }

  cout << s << endl;
}
