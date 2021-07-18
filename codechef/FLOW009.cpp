//Problem-Total Expenses

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t;
    cin>>t;
    while(t--){
        ll qty,prc;
        double expns;
        cin>>qty>>prc;
        
        if(qty>1000)
            expns=0.9*prc*qty;
        else
            expns=prc*qty;
            
        cout<<fixed<<setprecision(6)<<expns<<endl;
    }
	return 0;
}
