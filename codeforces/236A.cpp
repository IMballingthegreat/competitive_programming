#include <bits/stdc++.h>

void solve(){
    std::string s;
    std::cin >> s;
    std::unordered_set<char>st;
    for(int i =0;i<s.size();i++){
        st.insert(s[i]);
    }
    if(st.size()%2==0){
        std::cout <<"CHAT WITH HER!";
    }else{
        std::cout << "IGNORE HIM! " ;
    }

}
int main(){
    solve();
    return 0;
}