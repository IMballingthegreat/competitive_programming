#include <bits/stdc++.h>

void solve(){
    std::string s;
    std::cin>> s;
    std::vector<char>cp;
    for(int i =0;i<s.size();i++){
        if(s[i]!='+'){
            cp.emplace_back(s[i]);

        }
    }
    std::sort(cp.begin(),cp.end());
    for(int i =0;i<cp.size();i++){
        std::cout << cp [i] ;
        if(i<cp.size()-1){
        std::cout << '+';
        }
    }
    
    

}
int main(){
    solve();
    return 0;
}