#include <bits/stdc++.h> 
using namespace std;

int main(){
  long long int t,a,b,x,y,n,mn,mx,flag = 1, new_a_output,new_b_output;
  cin>>t;
  while(t--){
    cin>>a>>b>>x>>y>>n;
    long long int a1 = a, b1=b, n1=n;
    if(a-n > x){
      a = a-n;
      n = 0;
    }else{
      n = n - (a-x);
      a = x;
    }
    // cout<<"---------- "<<n<<endl;
    if(b-n > y && n!=0){
      b = b-n;
    }else{
      if(n!=0){
      b = y;
      }
    }
    new_a_output = b*a;




    if(b1-n1 > y){
      b1 = b1-n1;
      n1 = 0;
    }else{
      n1 = n1 - (b1-y);
      b1 = y;
    }
    // cout<<"---------- "<<n1<<endl;
    if(a1-n1 > x && n1!=0){
      a1 = a1-n1;
    }else{
      if(n1!=0){
      a1 = x;
      }
    }
    new_b_output = b1*a1;
    if(new_b_output < new_a_output){
      // cout<<a1<<" - "<<b1<<" - "<<n1<<endl;
      cout<<new_b_output<<endl;
    }else{
      // cout<<a<<" "<<b<<" "<<n<<endl;
      cout<<new_a_output<<endl;
    }
  }
  return 0;
}