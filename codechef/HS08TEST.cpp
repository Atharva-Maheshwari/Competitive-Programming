//Problem-ATM
#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    float y;
    cin>>x>>y;
    
    if((x>0 && x<=2000) && (y>=0.00 && y<=2000.00))
    {
        if((x%5==0) && (x+0.50<=y))
        {
            cout<<fixed<<setprecision(2)<<float(y-x-0.50);
        }
        else
            cout<<fixed<<setprecision(2)<<float(y);
    }
	return 0;
}
