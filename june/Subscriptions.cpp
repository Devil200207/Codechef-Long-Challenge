#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int n,m;
  cin>>n>>m;

  int ans;
  if(n%6 == 0)
  {
    ans = n/6;
    ans*=m;
  }
  else
  {
    ans = (n/6)+1;
    ans*=m;
  }

  cout<<ans<<'\n';
 
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