//Problem-Primality Test

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,flg=0;
        cin>>n;
        
        for(int i=2;i<n/2;i++)
        {
            if(n%i==0)
            {flg=1;
            break;}
        }
        if(n==1)
        flg=1;
        
        if(flg==0)
        cout<<"yes\n";
        else
        cout<<"no\n";
        
    }
	return 0;
}
