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
        string x;
        cin>>x;
        queue<char> q1,q2;
        bool f1=false, f2=false;
        for(int i=0;i<=n-1;++i)
        {
            int d= x[i]-'0';
            if(d==2 && i==0)
            {
                q1.push('1');
                q2.push('1');
            }
            else if(d==2 && i!=0)
            {
                if(f1)
                {
                    q2.push('2');
                    q1.push('0');
                }
                else if(f2)
                {
                    q1.push('2');
                    q2.push('0');
                }
                else
                {
                    q1.push('1');
                    q2.push('1');
                }
            }
            else if(d==0)
            {
                q1.push('0');
                q2.push('0');
            }
            else
            {
                if(!f1 && !f2)
                {
                    f1=true;
                    q1.push('1');
                    q2.push('0');
                }
                else if(f1)
                {
                    q2.push('1');
                    q1.push('0');
                }
                else
                {
                    q1.push('1');
                    q2.push('0');
                }
            }
        }
        while(!q1.empty())
        {
            cout<<q1.front();
            q1.pop();
        }
        cout<<endl;
        while(!q2.empty())
        {
            cout<<q2.front();
            q2.pop();
        }
        cout<<endl;
    }
    return 0;
}