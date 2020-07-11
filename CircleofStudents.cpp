#include <bits/stdc++.h>
#define endl "\n"

using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n, clock=0, anti=0;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; ++i)
        {
            cin>>arr[i];
            if(arr[i]==1)
                clock=i;
            if(arr[i]==n)
                anti=i;

        }
        int c=0;
        if(clock==n-1)
        {
            int p=2;
            for(int i=0; i<n-1; ++i)
            {
                if(arr[i]!=p)
                {
                    c=1;
                    break;
                }
                p++;
            }
            if(c==0)
                cout<<"YES"<<endl;
        }
        else if(clock==0)
        {
            int p=2;
            for(int i=1; i<n; ++i)
            {
                if(arr[i]!=p)
                {
                    c=1;
                    break;
                }
                p++;
            }
            if(c==0)
                cout<<"YES"<<endl;
        }
        else
        {
            int a= n-1-clock;
            int p=2;
            for(int i= clock+1; i<n;++i)
            {
                if(arr[i]!=p)
                {
                    c=1;
                    break;
                }
                p++;
            }
            if(c==0)
            {
                for(int i=0; i<clock;++i)
                {
                    if(arr[i]!=p)
                    {
                        c=1;
                        break;
                    }
                    p++;
                }
            }
            if(c==0)
                cout<<"YES"<<endl;
        }


        if(c==1)
        {
            c=0;
            if(anti==n-1)
        {
            int p=n-1;
            for(int i=0; i<n-1; ++i)
            {
                if(arr[i]!=p)
                {

                    c=1;
                    break;
                }
                p--;
            }
            if(c==0)
                cout<<"YES"<<endl;
        }
        else if(anti==0)
        {
            int p=n-1;
            for(int i=1; i<n; ++i)
            {
                if(arr[i]!=p)
                {

                    c=1;
                    break;
                }
                p--;
            }
            if(c==0)
                cout<<"YES"<<endl;
        }
        else
        {
            int a= n-1-anti;
            int p=n-1;
            for(int i= anti+1; i<n;++i)
            {
                if(arr[i]!=p)
                {
                    c=1;
                    break;
                }
                p--;
            }
            if(c==0)
            {
                for(int i=0; i<anti;++i)
                {
                    if(arr[i]!=p)
                    {
                        c=1;
                        break;
                    }
                    p--;
                }
            }
            if(c==0)
                cout<<"YES"<<endl;
        }
        }

        if(c==1)
        {
            cout<<"NO"<<endl;
        }

    }
    return 0;
}
