//first non-occring char
//cirular tour
// Leaders in an array
#include<bits/stdc++.h>
using namespace std;

int main(){
    string a;
    cin>>a;
    vector<char> s;
    int b[26];
    for(int i=0;i<26;i++){
        b[i]=0;
    }
    for(int i=0;i<a.length();i++){
        cout<<b[a[i]-'a']<<" ";
        if(b[a[i]-'a']==0){
            b[a[i]-'a']=1;
            s.push_back(a[i]);
        }else{
            vector<char>::iterator itr;
            for(itr=s.begin();itr!=s.end();itr++){
                if(*itr==a[i]){
                    s.erase(itr);
                    break;
                }
            }
        }
        cout<<s[0]<<"  ";
    }
    return 0;
}