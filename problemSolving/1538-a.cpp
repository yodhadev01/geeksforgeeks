#include <bits/stdc++.h> 
 
using namespace std;
 
int main()
{
    long long int testCases;
	cin>>testCases;

	while(testCases--){
		int size, input, minIndex, maxIndex, swaper, output;

		cin>>size;

		for (int iterator = 1; iterator <= size; iterator++) {
			cin>>input;
			if (input == 1) {
				minIndex = iterator;
			}
			if (input == size) {
				maxIndex = iterator;
			}
		}
		if (minIndex > maxIndex) {
			swaper = minIndex;
			minIndex = maxIndex;
			maxIndex = swaper;
		}

		cout<<minIndex<<" "<<maxIndex<<endl;
		if (size % 2 == 0) {
			output = minIndex < size/2 ? minIndex: size-minIndex+1;
			size -= output;
			maxIndex -= output;
			output += maxIndex < size/2 ? maxIndex: size-maxIndex+1;
		} else {
			if (minIndex == (size/2)+1 || maxIndex == (size/2)+1) {
				output = (size/2)+1;
			} else {
				output = minIndex <= size/2 ? minIndex: size-minIndex+1;
				size -= output;
				maxIndex -= output;
				output += maxIndex <= size/2 ? maxIndex: size-maxIndex+1;
			}
		}
		
		cout<<output<<endl;
	}
    return 0;
}