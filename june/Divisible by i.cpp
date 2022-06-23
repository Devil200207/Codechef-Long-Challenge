#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int n;
  cin>>n;

  int*arr = new int[n+1];
  int ans1 = n;
  for(int i=n;i>=1;i-=2)
  {
    arr[i] = ans1;
    ans1--;
  }

  int ans = 1;
  for(int i=n-1;i>=1;i=i-2)
  {
    arr[i] = ans;
    ans++;
  }

  for(int i=1;i<n+1;i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<'\n';
  delete[]arr;
 
}
 
signed main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 
 int t;
 cin>>t;
 
while(t--)
solve();
 
return 0;
}