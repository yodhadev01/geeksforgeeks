#include <bits/stdc++.h> 
 
using namespace std;
 
int main() {
	std::ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long int testCases;
	cin>>testCases;

	while(testCases--){
		int n,a,b,extra, count = 0;
		vector<int> v;
		cin>>n>>a>>b;

		for (int i=0;i<n;i++) {
			cin>>extra;
			v.push_back(extra);
		}

		sort(v.begin(), v.end());


		for(int i=0;i<n;i++){
			int lastIndex = -1;
			int firstIndex = -1;
			if (i<n-1 && v[i]+v[i+1]>b) {
				break;
			}
			if (v[n-1]+v[i] >= a) {
				for(int j=n-1;i<j;j--){
					lastIndex = j;
					if (v[j]+v[i]<= b && v[j]+v[i] >= a) {
						break;
					}
				}
				if (lastIndex != -1) {
					for(int j=i+1;j<=lastIndex;j++){	
						firstIndex = j;
						if (v[j]+v[i] <= b && v[j]+v[i] >= a) {
							break;
						}
					}
				}
				
				if (firstIndex != -1) {
					if (v[firstIndex]+v[i] >= a && v[firstIndex]+v[i] <= b) {
						count += lastIndex-firstIndex+1;
					}
					// cout<<lastIndex<<" - "<<firstIndex<<" - "<<i<<endl;
				}
			}
		}

		cout<<count<<endl;

	}
    return 0;
}