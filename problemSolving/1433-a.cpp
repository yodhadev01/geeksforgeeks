#include<bits/stdc++.h>
using namespace std;

int main(){
  int t,n,max,i,flag=0,j=0,sum=0;
  string s;
  int a[4] = {1,2,3,4};
  cin>>t;
  while(t--){
    cin>>n;
    i = n;
    max = 0;
    flag = n%10;
    while(i){
      max++;
      i = i/10;
    }
    j = flag-1;
    sum = j*10;
    int k = 0;
    while(max--){
      sum += a[k];
      k++;
    }
    cout<<sum<<endl;
  }
  return 0;
}