#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define MAX_SIZE 1000005

using namespace std;

int main()
{
    fast;
    int k;
    cin>>k;
    while(k--)
    {
        int n;
        cin>>n;
        string s,t;
        cin>>s>>t;
        int count=0,index1=-1,index2=-1;
        for(int i=0;i<n;++i)
        {
            if(s[i]!=t[i])
            {
                count++;
                if(index1<0)
                    index1=i;
                else
                    index2=i;
                
            }
        }
        if(count!=2)
        {
            cout<<"No"<<endl;
            continue;
        }
        if(s[index2]==s[index1] && t[index1]==t[index2])
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
        
    }
}