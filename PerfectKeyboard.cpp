/*
Author: Sanskar Agarwal
Nick: sanskaragarwal
Birla Institute Of Technology, Mesra
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define F(i,a,b) for(ll i = (ll)(a); i <= (ll)(b); i++)
#define RF(i,a,b) for(ll i = (ll)(a); i >= (ll)(b); i--)
#define INF 100009
#define mod 1000000007
#define pb(x) push_back(x)
#define mp(x,y) make_pair(x,y)
#define ff first
#define ss second

vector<int> edges[26];
int visited[26], cycle=0;

void reset()
{
    for(int i=0;i<26;++i)
    {
        edges[i].clear();
        visited[i]=0;
    }
    cycle=0;
}

void dfs_cycle_check(int node, int par)
{
    visited[node]= 1;
    for(auto i: edges[node])
    {
        if(i==par)
            continue;
        if(visited[i]==1)
            cycle=1;
        else if(visited[i]==0)
            dfs_cycle_check(i, node);
    }
}

void print(int i)
{
    visited[i]=1;
    cout<<(char)(i+ (int)('a'));
    for(auto c: edges[i])
    {
        if(visited[c]==0)
            print(c);
    }
}

int main()
{
    fast
    int t;
    cin>>t;
    while(t--)
    {
        reset();
        string s;
        cin>>s;
        int n= s.length();
        int dp[26][26];
        for(int i=0;i<26;++i)
        {
            for(int j=0;j<26;++j)
                dp[i][j]=0;
        }
        for(int i=0;i<n-1;++i)
        {
            int u= s[i]-'a', v=s[i+1]-'a';
            if(dp[u][v]==0 && dp[v][u]==0)
            {
                dp[u][v]=1, dp[v][u]=1;
                edges[u].push_back(v);
                edges[v].push_back(u);
            }
        }
        int check=0;
        for(int i=0;i<26;++i)
        {
            if(edges[i].size()>2)
            {
                check=1;
                break;
            }
        }
        for(int i=0;i<26;++i)
        {
            if(visited[i]==0)
                dfs_cycle_check(i, -1);
        }
        if(check || cycle)
        {
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
        for(int i=0;i<26;++i)
            visited[i]=0;
        for(int i=0;i<26;++i)
        {
            if(visited[i]==0 && edges[i].size()<2)
            {
                print(i);
            }
        }
        cout<<endl;
    }
    return 0;
}