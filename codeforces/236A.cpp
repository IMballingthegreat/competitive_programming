#include <iostream>
#include <string>
#include <unordered_map>
void solve(){
    std::string s;
    std::cin >> s;
    std::unordered_map<char,int>mp;
    for(char num:s){
        mp[num]++;
    }
    int cnt =0;
    for(auto&num:mp){
        if(num.second>=1){
            cnt++;
        }
    }
    if(cnt%2==0){
        std::cout << "CHAT WITH HER!" << '\n';
    }else{
        std::cout << "IGNORE HIM!" << '\n';
    }
}
int main(){
    solve();
    return 0;
}