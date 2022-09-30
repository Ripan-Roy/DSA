#include <bits/stdc++.h>
using namespace std;

void printS(vector<int> &v, vector<int> &ds, int target, int index, int n, int sum)
{
  if (index >= n)
  {
    if (sum == target)
    {
      for (auto k : ds)
        cout << k << " ";
      cout << "\n";
    }
    return;
  }

  ds.push_back(v[index]);
  sum += v[index];
  printS(v, ds, target, index + 1, n, sum);
  sum -= v[index];
  ds.pop_back();
  printS(v, ds, target, index + 1, n, sum);
  return;
}

int main()
{
  int n, target, sum = 0;
  cin >> n >> target;
  vector<int> v(n), ds;
  for (int i = 0; i < n; i++)
    cin >> v[i];
  printS(v, ds, target, 0, n, sum);
  return 0;
}