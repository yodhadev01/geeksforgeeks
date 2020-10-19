#include <bits/stdc++.h> 
using namespace std;

int main(){
  int t,a,b,c;
  cin>>t;
  while(t--){
    cin>>a>>b;
    c = a%b;
    if(c!=0){
      cout<<b-c<<endl;
    }else{
      cout<<"0"<<endl;
    }
  }
  return 0;
}