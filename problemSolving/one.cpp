/*
You are given a string of lower case letters. Find the longest substring that doesn't have repeated characters.
Input:
First line contains n, representing the length of the string.
Second line contains string of length n.
Constraints:
0<n<2*10^5

Sample input:
1
" "
Sample output:
1

Sample Input:
10
"aaaaaaaaab"
Sample output:
2
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
  map<char, int> mapArr;
  string user_input;
  cin>>user_input;
  int finalMax = 0, max=0, lastPoint=0, a=0, b=0;
  for(int i=0; i<user_input.size();i++){
    if(mapArr.find(user_input[i]) == mapArr.end()){
      mapArr[user_input[i]] = i;
      max++;
    }else{
      if(mapArr[user_input[i]] < lastPoint){
        max++;
      }else{
        max = i-lastPoint;
        lastPoint = mapArr[user_input[i]]+1;
      }
      mapArr[user_input[i]] = i;
    }
    
    if(finalMax<max){
      finalMax = i-lastPoint+1;
      a=i;
      b=lastPoint;
    }
  }
  cout<<endl<<finalMax<<endl;
  return 0;
}
            // check.begin()->first;
            // check.begin()->second;
            // input.begin()->first;
            // input.begin()->second;
            // check.erase(key);
            // input.erase(key);