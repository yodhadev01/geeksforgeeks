#include <bits/stdc++.h> 
using namespace std;

int main(){
  int t,n,w,h,extra1,extra2,localSum, sum, done;
  cin>>t;
  while(t--){
    extra1 = 0;
    extra2 = 0;
	sum = 0;
    cin>>w>>h>>n;
    extra1 = w%2;
	extra2 = h%2;
	done = 1;
	if (n == 1) {
		cout<<"YES"<<endl;
	} else if (extra1 == 1 && extra2 == 1) {
		cout<<"NO"<<endl;
	} else {
		if (extra1 == 0) {
			int i = 0;
			while(w%2 == 0 && done) {
				i++;
				localSum = pow(2, i);
				if(n <= localSum+sum) {
					done = 0;
				}
				w = w/2;
			}
			sum += localSum;
		}
		if (extra2 == 0) {
			int i = 0;
			while(h%2 == 0 && done) {
				i++;
				localSum = pow(2, i);
				if(n <= localSum+sum) {
					done = 0;
				}
				h = h/2;
			}
			sum += localSum;
		}

		if(n <= sum) {
			done = 0;
		}
		if (done) {
			cout<<n<<" "<<sum<<" "<<endl;
			cout<<"NO"<<endl;
		} else {
			cout<<n<<" "<<sum<<" "<<endl;
			cout<<"YES"<<endl;
		}
	}
  }
  return 0;
}