#include <iostream>
#include <unordered_map>
#include <string>
#include <bits/stdc++.h>
void solve(){
    std::unordered_map<std::string,int>mp;
    int n;
    std::cin >> n;
    while(n--){
        std::string s;
        std::cin >> s;
        if (mp[s] == 0) {
            std::cout << "OK\n";
        } else {
            std::cout << s << mp[s] << '\n';
        }
        mp[s]++;
        
        
    }
}
int main(){
    solve();
    return 0;
}