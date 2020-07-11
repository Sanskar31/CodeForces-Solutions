#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define MAX_SIZE 1000005 
using namespace std;

int main()
{
    //fast
    int t;
    cin>>t;
    while(t--)
    {
        ll x,y;
        cin>>x>>y;
        if(x==y)
        {
            cout<<"YES"<<endl;
            continue;
        }
        if(x==1)
        {
            cout<<"NO"<<endl;
            continue;
        }
        if((x==3 && y!=1 && y!=2))
        {
            cout<<"NO"<<endl;
            continue;
        }
        if((x==2 && y!=1 && y!=3))
        {
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
    }
}