//Problem-Reverse The Number

#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,rev,flg=0;
        cin>>n;
        while(n>0)
        {
            rev=n%10;
            if(rev!=0)
            flg=1;
            n=n/10;
            if(flg!=0)
            cout<<rev;
        }
        cout<<endl;
    }
	return 0;
}
