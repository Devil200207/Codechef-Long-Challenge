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

        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        int i = 0,j = n-1;

        while(j >= i)
        {
            if(i == j)
            {
                cout<<"YES"<<'\n';
                break;
            }
            if(arr[i] > arr[j])
            {
                if(arr[i] & arr[j])
                {
                    //swap(arr[i],arr[j]);
                    j--;
                    i++;
                }
                else
                {
                    cout<<"NO"<<'\n';
                    break;
                }
            }
            else
            {
                i++;
                j--;
            }
        }

    
    }
}