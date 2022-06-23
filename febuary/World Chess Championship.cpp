#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int x;
        cin>>x;

        string s;
        cin>>s;

        int a=0,b=0,c=0;

        for(int i=0;i<s.length();i++)
        {
            if(s[i] == 'C')
            {
                a++;
            }
            else if(s[i] == 'D')
            {
                b++;
            }
            else
            {
                c++;
            }
        }

        int ans1 = 2*a + b;
        int ans2 = 2*c + b;

        if(ans1 > ans2)
        {
            int ans = 60*x;
            cout<<ans;
        }
        else if(ans1 == ans2)
        {
            int ans = 55*x;
            cout<<ans;
        }
        else
        {
            int ans = 40*x;
            cout<<ans;
        }
        cout<<'\n';

    }
    return 0;
}