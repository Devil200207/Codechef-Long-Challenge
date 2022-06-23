#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        string s;
        cin>>s;

        int a = count(s.begin(),s.end(),'1');
        int b = count(s.begin(),s.end(),'0');

        if(a == n || b == n)
        {
            cout<<"YES"<<'\n';
            continue;
        }

        if(n%2 == 0)
        {
            if(a%2 == 0 && b%2 == 0)
            {
                cout<<"YES"<<'\n';
            }
            else if(a == b)
            {
                cout<<"YES"<<'\n';
            }
            else
            {
                cout<<"NO"<<'\n';
            }
        }
        else
        {
            if(a%2 == 0 && b%2 != 0)
            {
                cout<<"YES"<<'\n';
            }
            else if(a%2 != 0 && b%2 == 0)
            {
                cout<<"YES"<<'\n';
            }
            else
            {
                cout<<"NO"<<'\n';
            }
        }
    }

    return 0;
}