#include <iostream>
#include<bits/stdc++.h>
#define m 1000000007
using namespace std;

int helper(int n,int d)
{
    if(d <= 10)
    {
        int ans = (1 << d);
        if(ans >= n)
        {
            return n;
        }
        else
        {
            return ans;
        }
    }
    
    int ans = (1 << 10);
    d=d-10;
    
    for(int i=0;i<d;i++)
    {
        ans = (ans*3);
        if(ans >= n)
        {
            break;
        }
    }
    
    if(ans >= n)
    {
        return n;
    }
    else
    {
        return ans;
    }
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n,d;
	    cin>>n>>d;
	    
	    cout<<helper(n,d)<<endl;
	    
	}
	return 0;
}
