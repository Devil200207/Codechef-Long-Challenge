#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        int* arr = new int[n];
        int ans = 0;

      
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];    
        }

       for(int i=0;i<n;i++)
       {
           int idx = i+ans+1;

           if(arr[i] == idx)
           {
               ans++;
           }
       }

       
        delete[]arr;
        cout<<ans<<'\n';

    }

    return 0;
}