//Problem-Greedy puppy

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k,mx=0;
        cin>>n>>k;
        for(int i=2;i<=k;i++){
            mx=max(mx,n%i);
        }
        cout<<mx<<"\n";
    }
	return 0;
}