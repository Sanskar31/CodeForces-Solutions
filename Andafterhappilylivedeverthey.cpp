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

int decToBinary(int n) 
{ 
    // array to store binary number 
    int binaryNum[6]; 
    for(int i=0;i<6;++i)
        binaryNum[i]=0;
    // counter for binary array 
    int i = 0; 
    while (n > 0) { 
  
        // storing remainder in binary array 
        binaryNum[i] = n % 2; 
        n = n / 2; 
        i++; 
    } 
    int t;
    t=binaryNum[0];
    binaryNum[0]=binaryNum[4];
    binaryNum[4]=t;
    t=binaryNum[2];
    binaryNum[2]=binaryNum[3];
    binaryNum[3]=t;
    int num=0;
    for(int i=0;i<6;++i)
    {
        num+=binaryNum[i]*pow(2,i);
    }
    return num;
} 

int main()
{
    fast
    int n;
    cin>>n;
    cout<<decToBinary(n)<<endl;
    return 0;
}