#include <bits/stdc++.h>
void solve(){
    std::string a;
    std::string b;
    std::cin >> a >> b;
    for(int i =0;i<a.size();i++){
        a[i] = tolower(a[i]);
        b[i]=tolower(b[i]);
    }

    if(a<b)std::cout << -1;
    else if(a>b)std::cout << 1;
    else std::cout << 0;

}
int main(){
    solve();
    return 0;
}