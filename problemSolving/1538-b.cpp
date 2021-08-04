#include <bits/stdc++.h> 
 
using namespace std;
 
int main() {
	std::ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long int testCases;
	cin>>testCases;

	while(testCases--){
		int friends, candies, candiesSum = 0, requiredCandiesForEach = 0, kFreinds = 0;
		vector<int> distList;
		cin>>friends;

		for (int iterator = 0; iterator < friends; iterator++) {
			cin>>candies;
			candiesSum += candies;
			distList.push_back(candies);
		}
		// cout<<candiesSum<<" - "<<friends<<endl;
		if (candiesSum%friends != 0) {
			cout<<"-1"<<endl;
		} else {
			requiredCandiesForEach = candiesSum/friends;
			for (int distListIterator = 0; distListIterator < distList.size(); distListIterator++) {
				if (requiredCandiesForEach < distList[distListIterator]) {
					kFreinds++;
				}
			}
			cout<<kFreinds<<endl;
		}
	}
    return 0;
}