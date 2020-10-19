#include <bits/stdc++.h> 
using namespace std;

int main(){
  int t,n,step,current_pos,step_skiped,last_step_skiped;
  cin>>t;
  while(t--){
    cin>>n>>step;
    current_pos = n-2;
    step_skiped = 1;
    last_step_skiped = 0;
    if(step == 1){
      for(int i=0;i<n-2;i++){
        cout<<"a";
      }
      cout<<"bb"<<endl;
      continue;
    }
    while(step_skiped<step && current_pos>=0){
      last_step_skiped = step_skiped;
      step_skiped += n - current_pos ;//+1
      current_pos--;
    }
    if(current_pos == -1){
      current_pos = 0;
    }else{
      step_skiped = last_step_skiped;
    }

    // cout<<current_pos<<" "<<step<<" "<<step_skiped<<endl;

    for(int i=0;i<n;i++){
      if(current_pos == i || i == n- abs(step - step_skiped)){
        cout<<"b";
      }else{
        cout<<"a";
      }
    }
    cout<<endl;
  }
  return 0;
}