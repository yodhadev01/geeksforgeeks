#include <bits/stdc++.h> 
using namespace std;

int main(){
  int t,n,k1,a,sum = 0;
  cin>>t;
  while(t--){
    sum = 0;
    cin>>n>>k1;
    vector<int> v1;
    vector<int> v2;
    for(int i=0;i<n;i++){
      cin>>a;
      sum += a;
      v1.push_back(a);
    }
    for(int i=0;i<n;i++){
      cin>>a;
      v2.push_back(a);
    }
    sort(v1.begin(), v1.begin()+n);
    sort(v2.begin(), v2.begin()+n);
    // cout<<endl<<sum<<endl;

    for(int i=0,j=0,k=v2.size()-1;i<k1 && j<v1.size() && k >= 0; j++,k--){
      if(v1[j]<v2[k]){
        // cout<<sum<<" "<<i<<endl;
        i++;
        sum -= v1[j];
        sum += v2[k];
        a = v1[j];
        v1[j] = v2[k];
        v2[k] = a; 
      }else{
        break;
      }
    }
    // for(int i=0;i<v1.size();i++){
    //   cout<<v1[i]<<" ";
    // }
    cout<<sum<<endl;
  }
  return 0;
}