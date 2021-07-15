//Problem-Ciel and Receipt

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int p,ans=0;
        cin>>p;
        ans+=p/2048;
        p=p%2048;
        for(int i=0;i<32;i++)
        {
            if((p&1<<i)!=0)ans++;
        }
        cout<<ans<<"\n";
    }
	return 0;
}
