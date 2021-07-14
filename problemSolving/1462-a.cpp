#include <bits/stdc++.h>
using namespace std;
int main(){
	long long int t, n, a, start, end;
	cin >> t;
	while (t--){
		cin >> n;
		vector<long long int> v;
		for (int i =0; i<n; i++) {
			cin>>a;
			v.push_back(a);
		}
		start = 0;
		end = v.size() - 1;
		if (end == start){
			cout<<v[0];
		} else {
			for(start = 0, end = v.size() - 1; start <= end; start++, end--) {
				if (start == end) {
					cout<<" "<<v[start];
					break;
				} else {
					if (start != 0) {
						cout<< " ";
					}
				}
				cout<<v[start]<<" "<<v[end];
			}
		}
		cout<<endl;
	}
	return 0;
}