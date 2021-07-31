//Problems-Beautiful Pairs

#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
	ll tc;
	cin>>tc;
	while(tc-->0){
	   
	   ll n;
	   cin>>n;
	   vector<ll>brr;
	   vector<ll>arr(n,0);
	   map<ll, ll> mp;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        mp[arr[i]]++;
	        if(mp[arr[i]]==2)brr.push_back(arr[i]);
	    }
	    ll ans=n*(n-1);
	    for(int i=0;i<brr.size();i++){
	       // if(mp[brr[i]]%2!=0)mp[brr[i]]--;
	       ll aa=mp[brr[i]];
	        ans-=aa*(aa-1);
	    }
	    cout<<ans<<"\n";
       
	}
	return 0;
}