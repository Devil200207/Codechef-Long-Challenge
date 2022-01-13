#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--)
	{
	    int t1,t2,r1,r2;
	    cin>>t1>>t2>>r1>>r2;
	    
	    int a = pow(t1,2);
	    int b = pow(t2,2);
	    int c = pow(r1,3);
	    int d = pow(r2,3);
	    
	    int k1 = a*d;
	    int k2 = b*c;
	    
	    if(k1 == k2)
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
