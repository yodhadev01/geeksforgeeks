// Element with left side smaller and right side greater    
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
    b=v[0];
    for(int i=1;i<v.size();i++){
        if(b>v[i] && f==0){
            f=1;
        }
        if(f==1 && v[i]>b){
            b=v[i];
            f=0;
        }
    }
    if(f==0){
        cout<<b;
    }else{
        cout<<"no";
    }
    return 0;
}