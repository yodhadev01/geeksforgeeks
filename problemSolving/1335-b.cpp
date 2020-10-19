#include <bits/stdc++.h> 
using namespace std;

int main(){
  long long int t,n,a,b;
  string s = "abcdefghijklmnopqrstuvwxyz", s1="",s2="";
  cin>>t;
  while(t--){
    cin>>n>>a>>b;
    s1 = "";
    s2 = "";
    int i=0,j=0,q=0;
    for(i=0;i<b && i<26;i++){
      s1+=s[i];
    }
    s2 = s1;
    for(j,q=0;i<a;j++,i++){
      s1+=s2[q];
      if(q==s2.length()-1){
        q=0;
      }else{
        q++;
      }
    }
    a = s1.length();
    s2 = s1;
    for(int k=0,p=0;p<n-a;p++){
      s1+=s2[k];
      if(k==a-1){
        k=0;
      }else{
        k++;
      }
    }
    cout<<s1<<endl;
  }
  return 0;
}