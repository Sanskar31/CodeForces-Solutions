/*
Author: Sanskar Agarwal
Nick: sanskarag
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

int n,m;
char arr[100][100];
bool visited[100][100];

bool move(int x, int y, int parx, int pary)
{
    if(visited[x][y])
        return true;

    visited[x][y]=true;
    bool a=false,b=false,c=false,d=false;
    if(x+1<n && x+1!=parx)
        if(arr[x+1][y]==arr[x][y])
            a=move(x+1,y,x,y);
    if(x-1>=0 && x-1!=parx)
        if(arr[x-1][y]==arr[x][y])
            b=move(x-1,y,x,y);
    if(y+1<m && y+1!=pary)
        if(arr[x][y+1]==arr[x][y])
            c=move(x,y+1,x,y);
    if(y-1>=0 && y-1!=pary)
        if(arr[x][y-1]==arr[x][y])
            d=move(x,y-1,x,y);
    if(a || b || c || d)
    {
        return true;
    }
    else 
        return false;
}

int main()
{
    fast
    cin>>n>>m;
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<m;++j)
            visited[i][j]=false;
    }
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<m;++j)
            cin>>arr[i][j];
    }
    bool flag=false;
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<m;++j)
        {
            if(!visited[i][j])
            {
                flag= move(i,j,-1,-1);
                if(flag)
                {
                    break;
                }
            }
        }
        if(flag)
            break;
    }
    if(flag)
        cout<<"Yes"<<endl;
    else 
        cout<<"No"<<endl;
    return 0;
}