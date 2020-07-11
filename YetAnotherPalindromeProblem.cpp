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

int main()
{
    fast
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        map<int,int> mp;
        cin>>arr[0];
        mp[arr[0]]++;
        bool rep[5005];
        memset(rep, false, sizeof(rep));
        for(int i=1;i<n;++i)
        {
            cin>>arr[i];
            mp[arr[i]]++;
            if(arr[i]==arr[i-1])
                rep[arr[i]]=true;
        }
        if(n==2)
        {
            cout<<"NO"<<endl;
            continue;
        }
        bool done=false;
        for(int i=0;i<n;++i)
        {
            if((mp[arr[i]]==2 && !rep[arr[i]] ) || mp[arr[i]]>2)
            {
                cout<<"YES"<<endl;
                done=true;
                break;
            }
        }
        if(!done)
            cout<<"NO"<<endl;
    }
    return 0;
}