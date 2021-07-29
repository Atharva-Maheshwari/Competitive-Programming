//Problem-Chef and Fruits

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        if(abs(n-m)<=k)
        cout<<0<<"\n";
        else
        cout<<abs(n-m)-k<<"\n";
    }
	return 0;
}