#include <bits/stdc++.h>
using namespace std;

void printS(vector<int> &v, vector<int> &ds, int target, int index, int n)
{
  if (index >= n)
  {
    if (target == 0)
    {
      for (auto k : ds)
        cout << k << " ";
      cout << "\n";
    }
    return;
  }
  if (v[index] <= target)
  {
    ds.push_back(v[index]);
    printS(v, ds, target - v[index], index, n);
    ds.pop_back();
  }
  printS(v, ds, target, index + 1, n);
}

int main()
{
  int n, target, sum = 0;
  cin >> n >> target;
  vector<int> v(n), ds;
  for (int i = 0; i < n; i++)
    cin >> v[i];
  printS(v, ds, target, 0, n);
  return 0;
}