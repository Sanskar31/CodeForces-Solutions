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
        vector<int> v;
        vector<int>::iterator itr;
        for(int i=0;i<n;++i)
        {
            int a;
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(), v.end());
        itr=v.begin();
        int max=0, index;
        for(itr,index=1;itr!=v.end();++itr,index++)
        {
            int p=*itr;
            if(n-index>=p-1 && p>max)
                max=p;
            else
            {
                int b= n-index+1;
                if(b>max && p>=b)
                    max=b;
            }
        }
        cout<<max<<endl;
    }
}