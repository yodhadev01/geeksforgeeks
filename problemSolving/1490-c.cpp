#include <iostream>
#include <math.h>
 
using namespace std;
 
long long int a[1000001];
 
int main()
{
    for(long long int i = 1; i < 1000002; i++)
    {
        a[i-1] = i*i*i;
    }
 
    long long int t,x;
    cin>>t;
    while(t--)
    {
        cin>>x;
        long long int s=0,e=1000000;
        while(s <= e)
        {
            if(a[e] + a[s] == x)
            {
                cout<<"YES"<<endl;
                break;
            }
            else if(a[e] + a[s] < x)
            {
                s++;
            }
            else
            {
                e--;
            }
        }
        if(s > e)
            cout<<"NO"<<endl;
    }
    return 0;
}