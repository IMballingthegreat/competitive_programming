#include <iostream>
void solve(){
    long long n;
    std::cin >> n;
    std::vector<long.long>arr(n);
    for(int &c:arr){std::cin >> c;
    }
    std::unordered_map<long,long>mp;
    for(int num:arr){
        mp[num]++;
    }
    long long ans = INT_MAX;
    for(const auto&num:mp){
        if(ans>num.second){
            ans = num.second;
        }
    }
    std::cout << ans << '\n';
}
int main(){
    solve();
    return 0;
}