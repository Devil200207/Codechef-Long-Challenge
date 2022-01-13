#include<bits/stdc++.h>
#include<vector>
using namespace std;

vector<int> npos;

void helper2(int i,vector<bool>& visited,vector<int>& cycle)
{
    if(visited[i])
    {
        return;
    }

    cycle.push_back(i);
    visited[i] = true;
    helper2(npos[i],visited,cycle);
}

void helper(int n,int k)
{
    npos.resize(n+1);
    int index = 1;

    for(int i=1;i<=n;i+=2)
    {
        npos[i] = index++;
    }

    for(int i=2;i<=n;i+=2)
    {
        npos[i] = index++;
    }

    vector<bool> visited(n+1,0);
    vector<int> ans(n+1,0);

    for(int i=1;i<=n;i++)
    {
        if(visited[i] == 0)
        {
            vector<int> cycle;
            helper2(i,visited,cycle);
            int len = cycle.size();
            for(int j=0;j<len;j++)
            {
                ans[cycle[(j+k)%len]] = cycle[j];
            }
        }
    }

    for(int i=1;i<=n;i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,k;
        cin>>n>>k;

        helper(n,k);
    }
    return 0;
}