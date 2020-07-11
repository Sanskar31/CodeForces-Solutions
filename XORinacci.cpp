/*
Author: Sanskar Agarwal
Nick: sanskaragarwal
Birla Institute Of Technology, Mesra
*/
#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

int main()
{
    ll int t;
    cin>>t;
    while(t--)
    {
        int a,b,n;
        cin>>a>>b>>n;
        switch(n%3)
        {
            case 0:
                cout<<a<<endl;
                break;
            case 1:
                cout<<b<<endl;
                break;
            default:
                cout<<(a^b)<<endl;
        }
    }
}