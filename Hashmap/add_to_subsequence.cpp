#include <bits/stdc++.h>
#define lol long long int
using namespace std;

int main()
{
  lol t;
  cin >> t;
  while (t--)
  {
    lol n, ans = 0;
    cin >> n;
    vector<lol> v(n);
    map<lol, lol> m;
    for (lol i = 0; i < n; i++)
    {
      cin >> v[i];
      m[v[i]]++;
    }
    for (auto k : m)
    {
      if (k.second > ans)
        ans = k.second;
    }
    cout << ans - 1 << "\n";
  }
}
