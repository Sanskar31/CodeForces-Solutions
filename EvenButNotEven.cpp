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
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string s;
        cin>>n;
        cin>>s;
        if(n==1)
        {
            cout<<-1<<endl;
            continue;
        }
        int sum=0;
        for(int i=0;i<n;++i)
        {
            sum+= s[i]-'0';
        }
        if(sum%2==0)
        {
            int i=n-1;
            while(i>0)
            {
                int d= s[i]-'0';
                if(d%2!=0)
                    break;
                i--;
            }
            if(i==0)
            {
                cout<<"-1"<<endl;
                continue;
            }
            else
            {
                for(int j=0;j<=i;++j)
                {   
                    cout<<s[j];
                }
            }
            
        }
        else
        {
            int i=0;
            while(i<n-1)
            {
                int d= s[i]-'0';
                if(d%2!=0)
                {
                    s[i]='\0';
                    break;
                }
                i++;
            }
            if(i==n-1)
            {
                cout<<"-1"<<endl;
                continue;
            }
            i=n-1;
            while(i>0)
            {
                if(s[i]=='\0')
                {
                    i--;
                    continue;
                }
                int d= s[i]-'0';
                if(d%2!=0)
                    break;
                i--;
            }
            if(i==0)
            {
                cout<<"-1"<<endl;
                continue;
            }
            int j=0;
            while(s[j]=='0' || s[j]=='\0')
                j++;
            for(j;j<=i;++j)
            {
                if(s[j]!='\0')
                    cout<<s[j];
            }
        }
        cout<<endl;
    }
}