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
#define INF 1000000009
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
        int n;cin>>n;
        set<int> v;
        map<int, int> m;
        int arr[n];
        for(int i=0;i<n;++i)
        {
            int temp;
            cin>>temp;
            arr[i]=temp;
            m[temp]++;
            v.insert(temp);
        }
        ll count=0;
        
        for(int i=0;i<n;++i)
        {
            set<int>::iterator itr=v.begin();
            int num= arr[i];
            if(*itr!=num)
                count++;
            m[num]--;
            if(m[num]==0)
                v.erase(num);
        }
        cout<<count<<endl;
    }
}