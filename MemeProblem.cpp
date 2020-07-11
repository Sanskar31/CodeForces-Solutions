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

double req= 1e-6;

int main()
{
    fast
    int t;
    cin>>t;
    while(t--)
    {
        int d;
        cin>>d;
        int D= (d*d)-4*d;
        if(D>=0)
        {
            double DD= (double)sqrt(D);
            double b= (double)(DD+d)/2;
            double a= d-b;
            cout<<setprecision(9)<<fixed<<"Y "<<b<<" "<<a<<endl;
        }
        else if(d==0)
        {
            double l=0,r=0;
            cout<<setprecision(9)<<fixed<<"Y "<<l<<" "<<r<<endl;
        }
        else 
            cout<<"N"<<endl;
    }
    return 0;
}