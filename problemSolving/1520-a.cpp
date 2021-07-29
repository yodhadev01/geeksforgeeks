#include <bits/stdc++.h> 
 
using namespace std;
 
int main()
{
    long long int testCases;
	cin>>testCases;

	while(testCases--){
		long long int taskLength, aAscciCode = 65;
		int alphabatsCounter[26] = {0};
		bool isWorkSuspicious = false;
		string task;
		cin>>taskLength;
		cin>>task;

		for (int taskIterator = 0; taskIterator < taskLength; taskIterator++){
			int characterPosition = task[taskIterator]-aAscciCode;
			if (characterPosition >= 0 && characterPosition <= 25) {
				alphabatsCounter[characterPosition]++;

				if (alphabatsCounter[characterPosition] > 1 
					&& task[taskIterator-1] != task[taskIterator]
					&& taskIterator != 0) {
					isWorkSuspicious = true;
				}
			}
		}

		if (isWorkSuspicious) {
			cout<<"NO"<<endl;
		} else {
			cout<<"YES"<<endl;
		}
	}
    return 0;
}