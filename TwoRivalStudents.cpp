#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define MAX_SIZE 1000005 
using namespace std;

int main()
{
    fast
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,a,b;
        cin>>n>>x>>a>>b;
        if(x==0)
        {
            cout<<abs(a-b)<<endl;
            continue;
        }
        int i= abs(a-b);
        if(i+1+x>n)
        {
            cout<<n-1<<endl;
        }
        else
        {
            cout<<i+x<<endl;
        }
    }
    return 0;
}