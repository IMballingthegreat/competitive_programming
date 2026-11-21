#include <iostream>
void solve(){
    std::string s;
    std::cin >> s;
    int cntu=0,cntl=0;
    for(int i =0;i<s.size();i++){
        if(isupper(s[i])){
            cntu++;
        }else{
            cntl++;
        }
    }
    for(int i =0;i<s.size();i++){
        if(cntu>cntl){
            s[i] = toupper(s[i]);
        }else{
           s[i] = tolower(s[i]); 
        }

    }
   for(char ch : s){
    std::cout << ch;
   }
}
int main(){
    solve();
    return 0;
}