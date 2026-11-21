#include <iostream>
void solve(){
    std::string a,b;
    std::cin >> a >> b;
    for(int i =0;i<a.size();i++){
        a[i]= toupper(a[i]);
        b[i]= toupper(b[i]);

    }
    if(a>b){
        std::cout << 1 << '\n';
    }else if(a<b){
        std::cout << -1 << '\n';
    }else{
        std::cout << 0 << '\n';
    }
        
    

    
}
int main(){
    solve();
    return 0;
}