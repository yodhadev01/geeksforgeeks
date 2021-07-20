#include <bits/stdc++.h> 
using namespace std;

int main(){
  long long int t,n;
  cin>>t;
  while(t--){
    cin>>n;
	while(n%2 == 0 && n>1) {
		// cout<<n<<endl;
		n /= 2;
	}
	if (n<=1) {
		cout<<"NO"<<endl;
	} else {
		cout<<"YES"<<endl;
	}
  }
  return 0;
}