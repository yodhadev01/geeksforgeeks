//Sort an array of 0s, 1s and 2s
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a;
    vector<int> v;
    for(int i=0; i<a; i++){
        cin>>b;
        v.push_back(b);
    }
    int c=v.size()-1;
    for(int i=0;i<v.size() && c>=i ;i++){
        while(v[c] == 2 && c>=0){
            c--;
        }
        if(v[i]==2  && c>=0){
            v[i]=v[c];
            v[c]=2;
            c--;
        }
    }
    c=0;
    for(int i=v.size()-1;i>=0 && c<=i ;i--){
        while(v[c] == 0 && c<=v.size()-1){
            c++;
        }
        if(v[c]==0 && c< v.size()){
            v[i]=v[c];
            v[c]=0;
            c--;
        }
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}