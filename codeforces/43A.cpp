#include <bits/stdc++.h>

void solve(){
    int n{};
    std::cin >> n;
    std::unordered_map<std::string,int>mp;
     while(n--){
        std::string s;
        std::cin >> s;
        mp[s]++;
    }

    int mx =0;
    std::string winner;
    for(auto &c:mp){
        if(c.second>mx){
            mx = c.second;
            winner = c.first;
        }
    }
    std::cout << '\n';
    std::cout << winner << '\n';
}

int main(){
    solve();
    return 0;
}