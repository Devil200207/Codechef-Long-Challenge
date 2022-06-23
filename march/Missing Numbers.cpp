#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
    int* arr = new int[4];
    for(int i=0;i<4;i++)
    {
        cin>>arr[i];
    }

    sort(arr,arr+4);

    int n,m; // n = a-b, m = a+b
    int x,y; // x = a/b ,m = a*b 
    if(arr[0] < 0)
    {
        n = arr[0];
        x = arr[1];
    }
    else if(arr[0] == 0 && arr[1] == 1)
    {
        n = arr[0];
        x = arr[1];
    }
    else if(arr[0] == arr[1])
    {
        n = arr[0];
        x = arr[1];
    }
    else
    {
        n = arr[1];
        x = arr[0];
    }

    int b = n/(x-1);
    int a = n+b;

    int ans = a*b;
    if(ans == arr[2] || ans == arr[3])
    {
        cout<<a<<" "<<b;
    }
    else
    {
        cout<<-1<<" "<<-1;
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