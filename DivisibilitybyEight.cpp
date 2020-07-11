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

string s;
int n;

int main()
{
    fast
    cin>>s;
    n= s.size();
    bool flag=false;
    int num=0;
    if(n==1 && (s[0]=='0' || s[0]=='8'))
    {
        cout<<"YES"<<endl<<s[0]<<endl;
        return 0;
    }
    else if(n==1)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    if(n==2)
    {
        int a= s[0]-'0', b=s[1]-'0';
        num= a*10+b;
        if(a==0 || a==8 || b==8 || b==0)
        {
            if(b==0 || b==8)
                cout<<"YES"<<endl<<b<<endl;
            else 
                cout<<"YES"<<endl<<a<<endl;
        }
        else if(num%8==0)
            cout<<"YES"<<endl<<num<<endl;
        else
            cout<<"NO"<<endl;
        
        return 0;
    }
    for(int i=0;i<n-1;++i)
    {
        if(s[i]=='8')
        {
            flag=true;
            num=s[i]-'0';
            break;
        }
        for(int j=i+1;j<n;++j)
        {
            if(s[j]==s[i])
                continue;
            if(s[j]=='8'||s[j]=='0')
            {
                flag=true;
                num=s[j]-'0';
                break;
            }
            int temp= (s[i]-'0')*10+(s[j]-'0');
            if(temp%8==0)
            {
                num=temp;
                flag=true;
                break;
            }
        }
        if(flag)
            break;
    }
    for(int i=0;i<n-2;++i)
    {
        if(s[i]=='0')
            continue;
        for(int j=i+1;j<n-1;++j)
        {
            for(int k=j+1;k<n;++k)
            {
                int temp= (s[i]-'0')*100+(s[j]-'0')*10+(s[k]-'0');
                if(temp%8==0)
                {
                    num=temp;
                    flag=true;
                    break;
                }
            }
            if(flag)
                break;
        }
        if(flag)
            break;
    }
    if(flag)
        cout<<"YES"<<endl<<num<<endl;
    else 
        cout<<"NO"<<endl;
    return 0;
}