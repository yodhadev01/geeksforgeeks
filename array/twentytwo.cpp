//Spirally traversing a matrix 
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int c[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin>>c[i][j];
        }
    }

    for(int z=0;z<b/2;z++){
        for(int j=z;j<b-z-1;j++){
            cout<<c[z][j]<<" ";
        }
        for(int j=z;j<b-z-1;j++){
            cout<<c[j][b-z-1]<<" ";
        }
        for(int j=b-z-1;j>z;j--){
            cout<<c[b-z-1][j]<<" ";
        }
        for(int j=a-z-1;j>z;j--){
            cout<<c[j][z]<<" ";
        }
    }
    return 0;
}
// 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16