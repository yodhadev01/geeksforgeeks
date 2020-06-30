// Kth smallest element 
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b;
    set<int> s;
    for(int i=0; i<a; i++){
        cin>>c;
        s.insert(c);
    }
    set <int>::iterator itr;
    int i=0;
    for (itr = s.begin(); itr != s.end(); ++itr) 
    { 
        if(i==b-1){
            cout<<*itr;
        }
        i++;
    }  
    return 0;
}