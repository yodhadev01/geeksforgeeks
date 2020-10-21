#include<bits/stdc++.h>
using namespace std;

int main(){
  int t,n,a,max,i,flag=0;
  string s;
  cin>>t;
  while(t--){
    cin>>s;
    max = a = 1;
    for(int i=0;i<s.size();i++,a++){
      if(max < a){
        max = a;
      }
      if(s[i] == 'R'){
        a = 0;
      }
    }
    if(max < a){
        max = a;
    }
    cout<<max<<endl;
  }
  return 0;
}