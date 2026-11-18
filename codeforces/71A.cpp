#include <iostream>
#include <string>
void solve(){
    int t;
    std::cin >> t;
    while(t--){
        std::string s;
        std::cin >> s;
        if(s.size()<=10){
            std::cout << s << '\n';
        }else{
            
            std::cout << s[0] << s.size()-2<< s[s.size()-1]<< '\n';
        }
    }

}
int main(){
    solve();
    return 0;
}