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
        int n;
        cin>>n;
        int arr[n];
        vector<int> index[n+1];
        vector<int>::iterator itr;
        for(int i=0;i<n;++i)
        {
            cin>>arr[i];
            int a=arr[i];
            index[a].push_back(i);
        }
        if(n<2)
        {
            cout<<"-1"<<endl;
            continue;
        }
        int count=INT_MAX;
        for(int i=0;i<n;++i)
        {
            if(count==2)
                break;
            int temp;
            itr= upper_bound(index[arr[i]].begin(),index[arr[i]].end(), i);
            if(itr!=index[arr[i]].end() && *itr-i+1<count)
                count=*itr-i+1;
        }
        if(count==INT_MAX)
        {
            cout<<"-1"<<endl;
            continue;
        }
        cout<<count<<endl;
    }
}