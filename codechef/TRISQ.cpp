//Problem-Fit Squares in Triangle

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,sum=0;
        cin>>n;
        
        for(int i=0;i<=(n/2-1);i++){
            sum+=i;
        }
        cout<<sum<<"\n";
    }
	return 0;
}