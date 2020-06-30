// Leaders in an array
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,sum=0,eq=0;
    cin>>a;
    vector<int> v;
    stack<int> s;
    for(int i=0; i<a; i++){
        cin>>b;
        v.push_back(b);
    }
    s.push(v[0]);
    for(int i=1;i<v.size();i++){
        if(s.top()>=v[i])
        {
            s.push(v[i]);
        }else{
            while(s.size()!=0 && s.top()<v[i]){
                cout<<s.top()<<" -> "<<v[i]<<endl;
                s.pop();
            }
            s.push(v[i]);
        }
    }
    while(s.size()!=0){
        cout<<s.top()<<" -> "<<"-1"<<endl;
        s.pop();
    }
    return 0;
}