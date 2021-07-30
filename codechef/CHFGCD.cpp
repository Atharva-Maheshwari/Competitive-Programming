//Problem-Chef and GCD

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t;
    cin>>t;
    while(t--){
        ll x,y;
        cin>>x>>y;
        
        if(__gcd(x,y)>1)
        cout<<0<<"\n";
        else if((x%2==0 && y%2!=0) || (y%2==0 && x%2!=0))
        cout<<1<<"\n";
        else{
            ll nxtx=__gcd(x+1,y);
            ll nxty=__gcd(x,y+1);
            if(nxtx>1 || nxty>1 )
            cout<<1<<"\n";
            else
            cout<<2<<"\n";
        }
    }
	return 0;
}
