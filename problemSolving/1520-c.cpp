#include <bits/stdc++.h> 
 
using namespace std;
 
int main()
{
    long long int testCases;
	cin>>testCases;

	while(testCases--){
		int matrixSize, rowLengthCounter = 0, numberCounter = 1, usedNumberTracker[10001] = {0};
		bool isCool = true;
		vector<vector<int> > outputMatrix;
		cin>>matrixSize;

		if (matrixSize<=2) {
			if(matrixSize ==1) {
				cout<<"1"<<endl;
			} else {
				cout<<"-1"<<endl;
			}
		} else {
			for (int iteratorOuter = 0; iteratorOuter < matrixSize; iteratorOuter++) {
				vector<int>v1;
				for (int iteratorInner = 0; iteratorInner < matrixSize; iteratorInner++) {
					if(iteratorOuter == 0) {
						v1.push_back(numberCounter);
						usedNumberTracker[numberCounter] = 1;
						numberCounter+=2;
					} else {
						if(usedNumberTracker[numberCounter] == 1 || numberCounter> matrixSize*matrixSize) {
							for(int i=1;i<=matrixSize;i++){
								if (usedNumberTracker[i] != 1) {
									numberCounter = i;
									isCool = true;
									break;
								}else {
									isCool = false;
								}
							}
						}
						if(!isCool){break;}
						usedNumberTracker[numberCounter] = 1;
						v1.push_back(numberCounter);
						numberCounter+=2;
					}
				}
				outputMatrix.push_back(v1);
			}

			if(!isCool){
				cout<<false;
			} else {
				for (int i=0;i<outputMatrix.size();i++){
					for(int j=0;j<outputMatrix[i].size();j++){
						cout<<outputMatrix[i][j]<<" ";
					}
					cout<<endl;
				}
			}
		}
	}
    return 0;
}