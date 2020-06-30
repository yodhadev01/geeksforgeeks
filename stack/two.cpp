//cirular tour
// Leaders in an array
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,flag=0;
    cin>>a;
    vector<int> v1;
    vector<int> v2;
    stack<int> s;
    for(int i=0; i<a; i++){
        cin>>b>>c;
        v1.push_back(b);
        v2.push_back(c);
    }
    b=0,c=-1;
    for(int i=0;i<a;i++){
        if(i+1>=a){
            break;
        }
        if(v1[i]>=v2[i+1] && flag!=1){
            flag=1;
            b=0;
            c=i;
        }
        if(b<0 && flag!=0){
            flag=0;
            b=0;
            c=-1;
        }
        if(flag==1){
            b=b+v1[i]-v2[i+1];
        }
    }
    cout<<c<<endl;
    return 0;
}