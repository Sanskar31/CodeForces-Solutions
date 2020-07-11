/*
Author: Sanskar Agarwal
Nick: sanskaragarwal
Birla Institute Of Technology, Mesra
*/
#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
#define MAX 1000000
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000007

using namespace std;

int main()
{
    ll int n;
    cin>>n;
    if(n&1)
    {
        cout<<0<<endl;
    }
    else
    {
        ll int j=n/2;
        ll int a= pow(2,j);
        cout<<a<<endl;
    }
    return 0;
}