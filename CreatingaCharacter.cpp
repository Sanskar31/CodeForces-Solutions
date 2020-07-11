/*
Author: Sanskar Agarwal
Nick: sanskaragarwal
Birla Institute Of Technology, Mesra
*/
#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

int main(){
	int t,s,i,e,ss;
	cin>>t;
	while(t--){
		cin>>s>>i>>e;
		int t = (s+e-i+1)/2;
		cout<<min(e+1, max(t,0))<<"\n";
	}
}