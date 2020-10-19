#include <bits/stdc++.h> 
using namespace std;

int main(){
  string s;
  int t,n,a,odd_fail=0, even_fail=0;
  cin>>t;
  while(t--){
    cin>>n;
    vector<int> v;
    even_fail=0;
    odd_fail=0;
    for(int i=0;i<n;i++){
      cin>>a;
      // cout<<a<<" ai "<<i<<endl;
      if(i%2 != a%2){
        if(i%2 == 0){
          even_fail++;
        }else{
          odd_fail++;
        }
      }
      // cout<<odd_fail<<" odd even "<<even_fail<<endl;
    }
    if(odd_fail==even_fail){
      cout<<odd_fail<<endl;
    }else{
      cout<<-1<<endl;
    }

  }
  return 0;
}