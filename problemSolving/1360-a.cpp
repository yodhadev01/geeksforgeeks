#include <bits/stdc++.h> 
using namespace std;

int main(){
  int t,a,b,extra;
  cin>>t;
  while(t--){
    cin>>a>>b;
    if(a<b){
      extra = b;
      b = a;
      a = extra;
    }
    // cout<<a<<" "<<b<<endl;
    if(a/2 >= b){

      cout<<a*a<<endl;
    }else{
      cout<<(b*2)*(b*2)<<endl;
    }
  }
  return 0;
}