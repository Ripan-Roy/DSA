// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

int minSteps(string str)
{
  // Write your code here.
  string s = "";
  int cnt = 0, n = s.size(), x = 0;
  vector<int> v;
  for (int i = 0; i < n; i++)
  {
    if (str[i] == str[i + 1])
    {
      x++;
    }
    else
    {
      x++;
      v.push_back(x);
      x = 0;
    }
  }
  for (auto k : v)
    cout << k << " ";
  // int mini=v[0].size(), min_pos=0;
  while (!v.empty())
  {
    for (int i = 0; i < v.size(); i++)
    {
      if ((v[i] + v[i + 2]) > v[i + 1])
      {
        v.erase(v.begin() + (i + 1));
        cnt++;
        i--;
      }
      else
      {
        v.erase(v.begin() + i);
        i--;
        v.erase(v.begin() + (i + 2));
        i--;
        cnt += 2;
      }
      if (v.empty())
        break;
    }
  }
  return cnt;
}

// { Driver Code Starts.

int main()
{

  int t;
  cin >> t;
  while (t--)
  {
    string str;
    cin >> str;
    cout << minSteps(str) << endl;
  }
}
// } Driver Code Ends