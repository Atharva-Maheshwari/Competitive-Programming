//Problem-Tanu and Head-bob

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char str[n];
        for(int i=0;i<n;i++){
            cin>>str[i];
        }
        for(int i=0;i<n;i++){
            if(str[i]=='Y'){
            cout<<"NOT INDIAN\n";
            break;
            }
            else if(str[i]=='I'){
            cout<<"INDIAN\n";
            break;
            }
            else if(i==n-1)
            cout<<"NOT SURE\n";
        }
    }
	return 0;
}