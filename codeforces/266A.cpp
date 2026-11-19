#include <bits/stdc++.h>

void solve(){
    int n{};
    std::cin >> n;
    

    
    std::string s;
    std::cin >> s;
    int cnt =0;
    for(int i =1;i<n;i++){
        if(s[i]==s[i-1]){
            cnt++;
        }
    }
    std::cout << cnt;
}

int main(){
    solve();
    return 0;
}