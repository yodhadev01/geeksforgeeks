//Convert array into Zig-Zag fashion
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,f=0;
    cin>>a;
    vector<int> v;
    for(int i=0; i<a; i++){
        cin>>b;
        v.push_back(b);
    }
    for(int i=1;i<v.size();i++){
        if(i%2!=0){
            if(v[i-1]>v[i]){
                b=v[i-1];
                v[i-1]=v[i];
                v[i]=b;
            }
        }else{
            if(v[i-1]<v[i]){
                b=v[i-1];
                v[i-1]=v[i];
                v[i]=b;
            }
        }
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}