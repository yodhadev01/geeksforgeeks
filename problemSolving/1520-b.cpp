#include <bits/stdc++.h> 
 
using namespace std;
 
int main()
{
    long long int testCases;
	cin>>testCases;

	while(testCases--){
		long long int nNumber, ordinaryNumberCount = 0;
		cin>>nNumber;

		for (int iterator = 1; iterator <= 9; iterator++) {
			long long int odinaryCounter = iterator, nextNumberFinder = iterator;
			while(odinaryCounter <= nNumber) {
				ordinaryNumberCount++;
				nextNumberFinder *= 10;
				odinaryCounter += nextNumberFinder;
			}
		}
		cout<<ordinaryNumberCount<<endl;
	}
    return 0;
}