/*
Author: Sanskar Agarwal
Nick: sanskaragarwal
Birla Institute Of Technology, Mesra
*/
#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
#define MAX 1000000
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000007

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int a[100001],b[100001],c[100002];
    memset(b,0,sizeof(b));
    memset(c,0,sizeof(c));

    for(int i=1;i<=n;++i)
    {
        cin>>a[i];
    }
    for(int i=n;i>=1;--i)
    {
        if(b[a[i]])
            c[i]=c[i+1];
        else
        {
            b[a[i]]=1;
            c[i]=c[i+1]+1;
        }
    }
    while(m--)
    {
        int t;
        cin>>t;
        cout<<c[t]<<endl;
    }
    return 0;
}