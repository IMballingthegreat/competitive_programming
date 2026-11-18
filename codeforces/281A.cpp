#include <iostream>
void solve(){
    std::string s;
    std::cin >> s;
    for(int i =0;i<s.size();i++){
        if(!isupper(s[0])){
            s[0] = toupper(s[0]);
        }
    }
    std::cout << s ;
}
int main(){
    solve();
    return 0;
}