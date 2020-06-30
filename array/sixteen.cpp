// Pythagorean Triplet  
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a;
    vector<int> v;
    for(int i=0; i<a; i++){
        cin>>b;
        v.push_back(b*b);
    }
    sort(v.begin(),v.end());
    if(a>=3){
        b=0;
        for(int i=2;i<v.size();i++){
            int s=0,e=i-1;
           while(s<e){
               if(v[i]==v[s]+v[e]){
                   b=1;
                   break;
               }
               if(v[i]>v[s]+v[e]){
                   s++;
               }else{
                   e--;
               }
           }
           if(b){
               break;
           }
        }
        if(b){
            cout<<"yes";
        }else{
            cout<<"no";
        }
    }else{
        cout<<"no";
    }
    return 0;
}