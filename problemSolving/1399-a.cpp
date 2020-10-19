#include <bits/stdc++.h> 
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    vector<int> v;
    int s,val,flag = 1;
    cin>>s;
    for(int i=0;i<s;i++){
      cin>>val;
      v.push_back(val);
    }
    sort(v.begin(), v.end());
    for(int i=1;i<s;i++){
      if(abs(v[i-1]-v[i]) > 1){
        // cout<<v[i-1]<<" "<<v[i]<<endl;
        flag = 0;
        break;
      }
    }
    if(flag){
      cout<<"YES\n";
    }else{
      cout<<"NO\n";
    }
  }
  return 0;
}