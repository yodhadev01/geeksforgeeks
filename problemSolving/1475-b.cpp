#include <bits/stdc++.h> 
using namespace std;

int main(){
long long int t,n,a,localSum,sum;
cin>>t;
	while(t--){
		cin>>n;
		sum = 0;
		while (n > 0) {
			if (n%2020 == 0 || n%2021 == 0) {
				sum = 1;
				break;
			}
			n -= 2020;
		}
		if (sum) {
			cout<<"YES"<<endl;
		} else {
			cout<<"NO"<<endl;
		}
	}
return 0;
}