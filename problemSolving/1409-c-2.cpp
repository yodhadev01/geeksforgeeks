    #include<iostream>
    #include<bits/stdc++.h>
    #define mod 1000000007
    typedef long long int ll;
    using namespace std;
    int main()
    {
        ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
        int T;
        cin>>T;
        while(T--)
        {
            int n,x,y,i;
            cin>>n>>x>>y;
            int diff = (y-x);
            bool a[50];
            for(i=1;i<=49;i++)
            {
                if(diff%i == 0) a[i] = true;
                else a[i] = false;
            }
            int d = 0;
            for(i=1;i<=49;i++)
            {
                if(!a[i]) continue;
                d = i;
                if(diff/d >= n) continue;
                break;
            }
            int start = x;
            int rem = n - (diff/d + 1);
            while(start > 1 && rem > 0)
            {
                start -= d;
                rem--;
            }
            if(start < 1) start += d;
            for(i=0;i<n;i++)
            {
                cout << start << " ";
                start += d;
            }
            cout << "\n";
        }
    }