//Problem

#include<bits/stdc++.h>
#include<boost/multiprecision/cpp_int.hpp>
using boost::multiprecision::cpp_int;
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cpp_int fact=1;
        cin>>n;
        while(n>=1)
        {
            fact*=n;
            n--;
        }
        cout<<fact<<endl;
    }
	return 0;
}
