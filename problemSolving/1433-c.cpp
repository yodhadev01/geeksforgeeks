#include<bits/stdc++.h>
using namespace std;

int main(){
  int t,n,a,flag = 0,max1=-1;
  cin>>t;
  while(t--){
    cin>>n;
    max1 = -1;
    flag = 0;
    vector<int> v;
    for(int i=0;i<n;i++){
      cin>>a;
      max1 = max(a,max1);
      v.push_back(a);
    }
    // cout
    if(n==1){
      cout<<-1<<endl;
    }else{
      if(max1 == v[0] && max1 != v[1]){
        cout<<1<<endl;
      }else{
        for(int i=1;i<n;i++){
          if(max1 == v[i] && max1!= v[i-1]){
            cout<<i+1<<endl;
            flag = 1;
            break;
          }
          if(i+1 != n && max1 == v[i] && max1!= v[i+1]){
            cout<<i+1<<endl;
            flag = 1;
            break;
          }
        }
        if(!flag){
          cout<<-1<<endl;
        }
      }
    }
  }
  return 0;
}