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

string s;
int n;
queue<int> q;

bool consonant(char c)
{
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
        return true;
    return false;
}

int main()
{
    fast
    cin>>s;
    int n= s.size();
    int c=0;
    int count=1;
    for(int i=0;i<n;++i)
    {
        if(consonant(s[i]))
            c=0;
        else
        {
            if(s[i]==s[i-1])
                count++;
            else 
                count=1;
            c++;
            if(c==3)
            {
                if(count>=3)
                    c=2;
                else
                {
                    q.push(i);
                    c=1;
                }
            }
        }
    }
    if(q.empty())
        cout<<s<<endl;
    else
    {
        for(int i=0;i<n;++i)
        {
            cout<<s[i];
            if(!q.empty() && q.front()==i+1)
            {
                cout<<" ";
                q.pop();
            }
        }
    }
    return 0;
}