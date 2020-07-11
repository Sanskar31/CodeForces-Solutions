    #include <cstdio>
    #include <iostream>
    #include <algorithm>
    #include <cmath>
    #include <cstdlib>
    #include <cstring>
    #include <map>
    #include <stack>
    #include <queue>
    #include <vector>
    #include <bitset>
    #include <set>
    #include <utility>
    #include <sstream>
    #include <iomanip>
    using namespace std;
    typedef long long ll;
    typedef unsigned long long ull;
    #define inf 0x3f3f3f3f
    #define rep(i,l,r) for(int i=l;i<=r;i++)
    #define lep(i,l,r) for(int i=l;i>=r;i--)
    #define ms(arr) memset(arr,0,sizeof(arr))
    //priority_queue<int,vector<int> ,greater<int> >q;
    const int maxn = (int)1e5 + 5;
    const ll mod = 1e9+7;
    int arr[400100];
    int num[400100];
    int sum[400100];
    int main() 
    {
        #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        #endif
        //freopen("out.txt", "w", stdout);
        //ios::sync_with_stdio(0),cin.tie(0);
        int n,I;
        scanf("%d %d",&n,&I);
        rep(i,1,n) scanf("%d",&arr[i]);
        int nape=I*8/n;
        if(nape>=20) {
        	printf("0\n");
        }
        else {
        	sort(arr+1,arr+1+n);
        	int cnt=1;
        	num[1]=1;
        	for(int i=1;i<n;i++) {
        		if(arr[i]==arr[i+1]) {
        			num[cnt]++;
        		}
        		else {
        			cnt++;
        			num[cnt]=1;
        		}
        	}
        	int k=(1<<nape);
        	if(cnt<=k) printf("0\n");
        	else {
        		int ans=0;
        		int t=1;
        		for(int i=1;i<=k;i++) sum[t]+=num[i];
        		t++;
        		for(int i=k+1,j=1;i<=cnt;i++,j++,t++) {
        			sum[t]=sum[t-1]+num[i]-num[j];
        		}
        		for(int i=1;i<t;i++) ans=max(ans,sum[i]);
        		printf("%d\n",n-ans);
        	}
        }
        return 0;
    }