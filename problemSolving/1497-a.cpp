#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int testCases;
	cin>>testCases;
	while(testCases--){
		int n,input;
		vector<int> v;
		cin>>n;
		for(int i=0; i<n; i++){
			cin>>input;
			v.push_back(input);
		}
		sort(v.begin(), v.end());
		while(v.size()){
			vector<int> v1;
			for(int i=0;i<v.size();i++){
				if(i!=0){
					if(v[i]!=v[i-1]){
						cout<<v[i]<<" ";
					}else{
						v1.push_back(v[i]);
					}
				}else{
					cout<<v[i]<<" ";
				}
			}
			v = v1;
		}
		cout<<endl;
	}
    return 0;
}