#include <bits/stdc++.h>

void solve(){
    int n;
    long long x;
    std::cin >> n>>x;
    std::unordered_map<long long,int>seen;
    seen.reserve(n);
    std::vector<long long>arr(n);
    for(long long & value:arr){
        std::cin >> value;
    }
    for(int i =0;i<n;i++){
        long long need = x-arr[i];
        auto it = seen.find(need);
        if(it!=seen.end()){
            std::cout << it->second << ' ' << i+1 << '\n';
            return ;
        }
        seen[arr[i]] =i+1;

    }   
    std::cout << "IMPOSSIBLE\n";

}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
    return 0;
}
