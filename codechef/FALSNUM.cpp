//Problem-False Number

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.length();
        string ans="";
        if(s[0]!='1'){
            cout<<'1'<<s<<"\n";
            continue;
        }
        ans=ans+s.substr(0,1)+"0";
        ans=ans+s.substr(1,n-1);
        cout<<ans<<"\n";
    }
	return 0;
}
