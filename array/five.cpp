//Missing number in array  
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    vector<int> v1,v2;
    cin>>a>>b;
    for(int i=0;i<a;i++){
        cin>>c;
        v1.push_back(c);
    }
    for(int i=0;i<b;i++){
        cin>>c;
        v2.push_back(c);
    }
    int end = v1.size()-1;
    int s1=0,s2=0;
    for(;s1<v1.size() || s2<v2.size();){
        if(s1>end||v2.size()<=s2){
            break;
        }
        if(v2[s2]<v1[s1]){
            c=v2[s2];
            v2[s2]=v1[end];
            v1[end]=c;
            s2++;
            end--;
        }
        if(v2[s2]>=v1[s1]){
            s1++;
        }
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<v2.size();i++){
        cout<<v2[i]<<" ";
    }
    return 0;
}
