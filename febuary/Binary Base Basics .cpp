#include<bits/stdc++.h>
#include<string>
using namespace std;


int helper(int n,string s)
{
    int ans = 0;
 
   
    int right = 0;
    int left = n-1;

    while(right <= left)
    {
        if(s[right] != s[left])
        {
            ans++;
        }

        right++;
        left--;
    }

    return ans;
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,k;
        cin>>n>>k;


        string s;
        cin>>s;

        int ans = k - helper(n,s);

        if(ans >=0 && ans%2==0)
        {
            cout<<"YES"<<'\n';
        }
        else if(ans >= 0 && n%2 == 1)
        {
            cout<<"yes"<<'\n';
        }
        else
        {
            cout<<"NO"<<'\n';
        }


    }

    return 0;
}