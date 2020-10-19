// (ceil(log2(n)) == floor(log2(n)))
#include <bits/stdc++.h> 
using namespace std;

int main(){
  long long int t,n,a,b,flag=0;
  float m;
  cin>>t;
  while(t--){
    cin>>a;
    vector<long long int> v;
    flag = 1;
    if(a == 2){
      flag = 0;
    }else{
      n = 0;
      for(int i=0,j=2;i<a/2;i++,j+=2){
        n+=j;
        v.push_back(j);
      }
      for(int i=a/2,j=1;i<a;i++,j+=2){
        if(i+1>=a){
          j = n;
          if(j%2 ==0){
            flag = 0;
          }
        }
        n-=j;
        v.push_back(j);
      }
    }
    if(flag == 0){
      cout<<"NO"<<endl;
    }else{
      cout<<"YES"<<endl;
      for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
      }
      cout<<endl;
    }
  }
  return 0;
}