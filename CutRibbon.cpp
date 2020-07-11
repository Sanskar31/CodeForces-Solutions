    /*
    Author: Sanskar Agarwal
    Nick: sanskaragarwal
    Birla Institute Of Technology, Mesra
    */
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long int
    #define endl "\n"
    #define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #define F(i,a,b) for(ll i = (ll)(a); i <= (ll)(b); i++)
    #define RF(i,a,b) for(ll i = (ll)(a); i >= (ll)(b); i--)
    #define INF 100009
    #define mod 1000000007
    #define pb(x) push_back(x)
    #define mp(x,y) make_pair(x,y)
    #define ff first
    #define ss second
     
    set<int> s;
     
    int ans(int n, int dp[])
    {
        if(n==0)
            return 0;
        
        if(dp[n]!=-1)
            return dp[n];
     
        int best=0;
        set<int>::iterator itr=s.begin();
        for(itr;itr!=s.end();++itr)
        {
            if(n-*itr>=0)
                best = max(best, ans(n-*itr, dp)+1);
        }
        if(best==0)
            return INT_MAX;
        else   
            return dp[n]=best;
    }
     
    int ans_bu(int n, int dp[])
    {
        dp[0]=0;
     
        for(int i=1;i<=n;++i)
        {
            set<int>::iterator itr=s.begin();
            int best=0;
            for(itr;itr!=s.end();++itr)
            {
                int temp=-1;
                if(i-*itr>=0)
                     temp = dp[i-*itr] + 1;
                if(temp!=-1)
                    best = max(best, temp);
            }
            if(best!=0)
                dp[i]= best;
        }
        return dp[n];
    }
     
    int main()
    {
        fast
        int n;
        cin>>n;
        for(int i=0;i<3;++i)
        {
            int a;
            cin>>a;
            s.insert(a);
        }
        int dp[n+1];
        memset(dp, -1, sizeof(dp));
        cout<<ans_bu(n,dp)<<endl;
    }