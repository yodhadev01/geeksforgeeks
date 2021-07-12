#include<bits/stdc++.h>
using namespace std;
int main(){
  int t,hr,min,final_min;
  string s;
  cin>>t;
  while(t--){
    cin>>hr>>min;
    final_min = 60*(24-hr);
    final_min -= min;
    cout<<final_min<<endl;
    
  }
  return 0;
}