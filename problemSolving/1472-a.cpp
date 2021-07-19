#include <iostream>

int main(){
    int t, w, h, n;
    long long cnt = 1;
    int check;
 
    std::cin >> t;
    check = t;
    while(t > 0){
        cnt = 1;
 
        std::cin >> w;
        std::cin >> h;
        std::cin >> n;
 
 
        if(n == 1){
            std::cout << "YES" << std::endl;
        }
        else{
            if(w%2 == 1 && h%2 == 1){
                std::cout << "NO" << std::endl;
            }
            else{
                while(w%2 == 0){
                    w /= 2;
                    cnt *= 2;
                }
                while(h%2 == 0){
                    h /= 2;
                    cnt *= 2;
                }
                if(cnt >= n){
                    std::cout << "YES" << std::endl;
                }
                else{
                    std::cout << "NO" << std::endl;
                }
 
            }
 
        }
 
        t--;
    }
}