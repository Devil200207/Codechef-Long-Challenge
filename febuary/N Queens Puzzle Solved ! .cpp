#include<bits/stdc++.h>
using namespace std;

float helper(float a,int b)
{
    if(a == 0)
    {
        return 0;
    }
    
    float ans = 1;
    while(b > 0)
    {
        if(b & 1)
        {
            ans = (ans*a);           
        }
        a = (a*a);
        b = b/2;
    }
    return ans;
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        // if(n<6)
        // {
        //     cout<<0<<"\n";
        //     continue;
        // }

        float a = (0.143*n);

        float ans = helper(a,n);

        cout<<round(ans)<<'\n';

    }

    return 0;
}