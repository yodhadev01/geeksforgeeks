#include <bits/stdc++.h> 
using namespace std;

int main(){
  int t,a,b,flag = 0;
  cin>>t;
  while(t--){
    flag = 0;
    cin>>a>>b;
    int diff = abs(a-b);
    diff%10 == 0 ? flag = 1 : flag = 0;
    if(flag){
      cout<<diff/10<<endl;
    }else{
      cout<<(diff/10)+1<<endl;
    }
  }
  return 0;
}