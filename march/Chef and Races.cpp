#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int x,y,a,b; 
	   cin>>x>>y>>a>>b;

        if(x == a || x == b)
       {
           if(y == a || y == b)
           {
               cout<<0;
           }
           else
           {
               cout<<1;
           }
       }
       else if(y == a || y == b)
           {
               cout<<1;
           }
           else
           {
               cout<<2;
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