//Problem-Lucky Four

#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,dgt,count=0;
        cin>>n;
        while(n>0)
        {
            dgt=n%10;
            n=n/10;
            if(dgt==4)
            count++;
        }
        cout<<count<<endl;
    }
	return 0;
}
