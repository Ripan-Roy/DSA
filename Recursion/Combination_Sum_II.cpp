#include <bits/stdc++.h>
using namespace std;
void findcombination(int index, int n, int target, vector<int> &arr, vector<int> &ds, vector<vector<int>> &ans)
{
  if (target == 0)
  {
    ans.push_back(ds);
    return;
  }
  for (int i = index; i < n; i++)
  {
    if (i > index && arr[i] == arr[i - 1])
      continue;
    if (arr[i] > target)
      break;
    ds.push_back(arr[i]);
    findcombination(i + 1, n, target - arr[i], arr, ds, ans);
    ds.pop_back();
  }
}

int main()
{
  int n, target;
  cin >> n >> target;
  vector<int> arr(n), ds;
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  sort(arr.begin(), arr.end());
  vector<vector<int>> ans;
  findcombination(0, n, target, arr, ds, ans);
  for (auto i : ans)
  {
    for (auto j : i)
      cout << j << " ";
    cout << "\n";
  }
}