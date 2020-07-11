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
    int arr[n];
    for(int i=0;i<n;++i)
    {
        cin>>arr[i];
    }
    int i=0;
    vector<int> v;
    vector<int>::reverse_iterator itr;
    while(i<n)
    {   
        int count=1,j;
        for(j=i;j<n-1;++j)
        {
            if(arr[j]<arr[j+1])
                count++;
            else
                break;
        }
        v.push_back(count);
        i=j+1;
    }
    sort(v.begin(), v.end());
    itr= v.rbegin();
    cout<<*itr<<endl;
}