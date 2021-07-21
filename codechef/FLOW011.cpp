//Problem-Gross Salary

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int sal;
        float gsal;
        cin>>sal;
        if(sal<1500)
        gsal=2*sal;
        else
        gsal=sal+500+(sal*0.98);
        
        cout<<fixed<<setprecision(2)<<gsal<<"\n";
    }
	return 0;
}
