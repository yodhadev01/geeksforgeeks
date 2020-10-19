#include <bits/stdc++.h> 
using namespace std;

int main(){
  int t,a,n,diff=0;
  cin>>t;
  while(t--){
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
      cin>>a;
      v.push_back(a);
    }
    sort(v.begin(), v.begin()+n);
    diff = v[1]-v[0];
    for(int i=1;i<n;i++){
      if(diff> v[i]-v[i-1]){
        diff = v[i]-v[i-1];
      }
    }
    cout<<diff<<endl;
  }
  return 0;
}