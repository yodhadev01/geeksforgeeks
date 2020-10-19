#include <bits/stdc++.h> 
using namespace std;

int main(){
  string s;
  int t,count=0, last=0;
  cin>>t;
  while(t--){
    count=0;
    cin>>s;
    for(int i=0;i<s.size()-1;){
      count++;
      cout<<s[i]<<s[i+1];
      last = i+1;
      i+=4;
    }
    if(s.size()-1 != last){
      cout<<s[s.size()-1];
    }
    cout<<endl;
  }
  return 0;
}