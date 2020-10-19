#include <bits/stdc++.h> 
using namespace std;

int main(){
  int t,n, open=0,close=0,sum=0,sub=0;
  string s;
  cin>>t;
  while(t--){
    sub=0;
    sum = 0;
    open = 0;
    close = 0;
    cin>>n;
    cin>>s;
    for(int i=0;i<n;i++){
      if(s[i] == '('){
        sum++;
      }else{
        sum--;
      }
      if(sum<0){
        close++;
        sum=0;
      }
    }
    open = sum;
    sum=0;
    // stack<char> st;
    // for(int i=0;i<n;i++){
    //   if(s[i] == '('){
    //     st.push(s[i]);
    //   }else{
    //     if(st.empty()){
    //       open--;
    //       sum++;
    //     }else{
    //       st.pop();
    //     }
    //   }
    // }
    cout<<open<<endl;
  }
  return 0;
}