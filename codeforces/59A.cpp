#include <iostream>
#include <string>
void solve(){
    std::string s;
    std::cin >> s;
    int cntl =0;
    int cnth = 0;
    for(int i = 0;i<s.size();i++){
        if(islower(s[i])){
                cntl++;
        }else{
                cnth++;
        }
        
    }
    for(int i =0;i<s.size();i++){
        if(cntl>=cnth){
            s[i]= tolower(s[i]);
        }else{
           s[i]=  toupper(s[i]);
        
        }
    }
    
    std::cout << s ;
   }
int main(void){
    solve();
    return 0;
}
