#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int a,b,x,y;
        cin>>a>>b>>x>>y;

        int ans1 = x*y;
        int ans2 = a*b;

        if(ans1 >= ans2)
        {
            cout<<"Yes";
        }
        else
        {
            cout<<"No";
        }
        cout<<'\n';
    }

    return 0;
}