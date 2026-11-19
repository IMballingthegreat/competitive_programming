#include <bits/stdc++.h>
#include <string>
void solve(){
    int n{};
    std::cin >> n;
    while(n--){
        std::string s;
        std::cin >> s;
        if(s.size()>10){
            std::cout << s[0]<< s.size()-2<< s[s.size()-1]<<'\n';
        }
        else{
            std::cout << s << '\n';
        }
}        
}
int main(void){
    solve();
    return 0;
}
