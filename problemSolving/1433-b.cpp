#include<bits/stdc++.h>
using namespace std;

int main(){
  int t,n,zero,max_zero,a,first = 0,last = 0,flag = 0;
  cin>>t;
  while(t--){
    cin>>n;
    zero = 0;
    first = last = -1;
    vector<int> v;
    for(int i=0;i<n;i++){
      cin>>a;
      v.push_back(a);
    }
    flag = 0;
    max_zero = 0;
    zero = 0;
    for(int i=0;i<v.size();i++){
      if(first == -1 && v[i] == 1){
        first = i;
        last = i;
        flag = 1;
      }else{
        if(last != -1 && v[i] == 1){
          last = i;
          // cout<<i<<" ";
          zero++;
        }
      }
    }
    cout<<endl<<(last-first)-zero<<endl;
  }
  return 0;
}