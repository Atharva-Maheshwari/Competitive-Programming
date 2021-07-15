//Problem-The Block Game

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,temp,r,sum=0;
        cin>>n;
        temp=n;
        while(n>0){
            r=n%10;
            sum=sum*10+r;
            n/=10;
        }
        if(temp==sum)
        cout<<"wins\n";
        else
        cout<<"loses\n";
    }
	return 0;
}
