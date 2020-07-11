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
    int n;
    cin>>n;
    int arr[5]= {1,5,10,20,100};
    int count=0;
    for(int i=4;i>=0;--i)
    {
        int c= arr[i];
        if(n/c>0)
        {
            count= count + n/c;
            n= n%c;
        }
    }
    cout<<count<<endl;
}