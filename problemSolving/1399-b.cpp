#include <bits/stdc++.h> 
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    vector<long long int> v1;
    vector<long long int> v2;
    long long int n,val,v1_min = -1, v2_min = -1;
    cin>>n;
    for(int i=0; i<n;i++){
      cin>>val;
      if(v1_min == -1 || v1_min>val){
        v1_min=val;
      }
      v1.push_back(val);
    }
    for(int i=0; i<n;i++){
      cin>>val;
      if(v2_min == -1 || v2_min>val){
        v2_min=val;
      }
      v2.push_back(val);
    }
    // cout<<v1_min<<" "<<v2_min;
    long long int diff = 0;
    for(int i=0;i<n;i++){
      int effect1 = 0, effect2 = 0;
      if(v1[i]>v1_min){
        effect1 = v1[i]-v1_min;
      }
      if(v2[i]>v2_min){
        effect2 = v2[i]-v2_min;
      }
      if(effect1<effect2){
        diff += effect2; 
      }else{
        diff += effect1;
      }
    }
    cout<<diff<<endl;
  }
  return 0;
}