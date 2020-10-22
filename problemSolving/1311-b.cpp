    #include<bits/stdc++.h>
    using namespace std;
     
    bool isSwapable(int curr_poss, int to_be_poss, set<int> s1  ){
      if(curr_poss < to_be_poss){
        if(s1.find(curr_poss) != s1.end()){
          return true;
        }else{
          return false;
        }
      }else{
        if(s1.find(to_be_poss) != s1.end()){
          return true;
        }else{
          return false;
        }
      }
    }
     
    int main(){
      int t,n,m,a,diff;
      cin>>t;
      while(t--){
        cin>>n>>m;
        int v1[n];
        set<int> s1;
        for(int i=0;i<n;i++){
          cin>>v1[i];
        }
        for(int i=0;i<m;i++){
          cin>>a;
          s1.insert(a);
        }
        if(n-1 == m || m == n){
          cout<<"YES"<<endl;
          continue;
        }
        bool flag = true;
        for(int i=0;i<n;i++){
          for(int j=1;j<n;j++){
            if(v1[j]<v1[j-1]){
              if(isSwapable(j+1, j, s1)){
                a = v1[j];
                v1[j] = v1[j-1];
                v1[j-1] = a;
              }else{
                // cout<<endl<<v1[j]<<" "<<v1[j-1]<<endl;
                // for(int k=0;k<n;k++){
                //   cout<<v1[k]<<" ";
                // }
                // cout<<endl;
                flag = false;
                break;
              }
            }
          }
          if(!flag){
            break;
          }
        }
        if(!flag){
          cout<<"NO"<<endl;
        }else{
          cout<<"YES"<<endl;
        }
      }
      return 0;
    }