// Largest Number formed from an Array 
#include<bits/stdc++.h>
using namespace std;

int main(){
    string a,c;
    int b;
    cin>>b;
    vector<string> v;
    for(int i=0; i<b; i++){
        cin>>a;
        v.push_back(a);
    }
    for(int i=1;i<v.size();i++){
        for(int j=0;j<i;j++){
            a=v[i]+v[j];
            c=v[j]+v[i];
            if(a.compare(c)>0){
                a=v[i];
                v[i]=v[j];
                v[j]=a;
            }
        }
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}