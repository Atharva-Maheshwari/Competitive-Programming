//Problem-Grade The Steel

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int hrdn,tensl;
        float cc;
        cin>>hrdn>>cc>>tensl;
        
        if(hrdn>50 && cc<0.7 && tensl>5600)
        cout<<10<<"\n";
        else if(hrdn>50 && cc<0.7)
        cout<<9<<"\n";
        else if(tensl>5600 && cc<0.7)
        cout<<8<<"\n";
        else if(hrdn>50 && tensl>5600)
        cout<<7<<"\n";
        else if(hrdn>50 || cc<0.7 || tensl>5600)
        cout<<6<<"\n";
        else
        cout<<5<<"\n";
    }
	return 0;
}
