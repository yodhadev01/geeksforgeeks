//Find last index of a 1 in a string
#include<bits/stdc++.h>
using namespace std;

int main(){
    string a;
    int b=-1;
    cin>>a;
    for(int i=a.length()-1;i>=0;i--){
        if(a[i]=='1'){
            b=i+1;
            break;
        }
    }
    if(b!=-1){
        cout<<b;
    }else{
        cout<<"no";
    }
    return 0;
}