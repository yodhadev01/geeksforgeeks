// Trapping Rain Water
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    vector<int> v;
    stack<int> s;
    cin>>a;
    for(int i=0; i<a; i++){
        cin>>b;
        v.push_back(b);
    }
    int removal_sum=0,real_sum=0;
    for(int i=0;i<v.size();i++){
        if(s.size()!=0){
            if(v[s.top()]>=v[i]){
                s.push(i);
            }else{
                while(s.size()!=0&& v[s.top()]<=v[i]){
                    removal_sum = abs(i-s.top())*v[s.top()];
                    real_sum = abs(i-s.top())*(v[i]-1);
                    
                }
            }
        }
    }
    return 0;
}