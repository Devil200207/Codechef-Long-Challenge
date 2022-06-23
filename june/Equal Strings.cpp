#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int n;
  cin>>n;

  string a,b;
  cin>>a>>b;

  string c="";
  for(int i=0;i<n;i++)
  {
    if(a[i] != b[i])
    {
        c+=b[i];
    }
  }

  sort(c.begin(),c.end());

  int ans = 0;
  for(int i=0;i<c.size()-1;i++)
  {
    if(c[i] != c[i+1])
    {
        ans++;
    }
  }

  cout<<ans+1<<'\n';
 
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