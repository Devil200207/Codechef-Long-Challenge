#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int n,m;
  cin>>n>>m;

  if(n == m)
  {
    cout<<"YES";
  }
  else
  {
    int ans = m-n;
    if(ans%3 == 0 || ans%3 == 1)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
  }

  cout<<'\n';
 
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