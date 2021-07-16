#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	int fixedNumber[10] = {9,8,7,6,5,4,3,2,1};
	int number, numberRequired, random, remendor, devisor;
	cin >> t;
	while (t--){
		cin>>number;
		remendor = 0;
		devisor = 0;
		numberRequired = 0;
		if (number<=9) {
			cout<<number<<endl;
		} else if (number > 45) {
			cout<<-1<<endl;
		} else {
			vector<int> v;
			random = 0;
			for(int i=0;i<9;i++){
				random += fixedNumber[i];
				numberRequired++;
				if (random>=number) {
					break;
				}
			}
			remendor = number%numberRequired;
			devisor = number/numberRequired;

			// cout<<numberRequired<<endl;
			// cout<<remendor<<endl;
			// cout<<devisor<<endl;

			for(int i=0;i<numberRequired;i++){
				v.push_back(devisor);
			}
			if (v[v.size()-1]+ remendor > 9) {
				v[v.size()-1] = v[v.size()-1]+ remendor -1 ;
				v[v.size()-2] = v[v.size()-2] +1 ;
			} else {
				v[v.size()-1] = v[v.size()-1]+ remendor;
			}
			
			// for(int i=0;i<v.size();i++){
			// 	cout<<v[i];
			// }
			// cout<<endl;
			int u = 1;
			for(int left=0, right=v.size()-1;left<right;){
				if(v[left]==1 || v[left]-1 == v[left-1]){
						left++;
				}
				if(v[right]==9 || v[right]+1 == v[right+1]){
					right--;
				}
				if(left>=right){
					break;
				}
				if(v[right]+1 != v[right+1] && v[left]-1 != v[left-1]){
					v[right]++;
					v[left]--;
				}
				
				cout<<left<<" "<<right<<endl;
				for(int i=0;i<v.size();i++){
				cout<<v[i];
				}
				cout<<endl;
			}
			for(int i=0;i<v.size();i++){
				cout<<v[i];
			}
			cout<<endl;
		}


	}
	return 0;
}