#include <bits/stdc++.h>

void solve(){
    std::string s;
    std::cin >> s;
    for(int i =0;i<s.size();i++){
        if(s[i]=='A'||s[i]=='O'||s[i]=='I'||s[i]=='E'||s[i]=='U'||s[i]=='Y'||s[i]=='a'||s[i]=='o'||s[i]=='i'||s[i]=='e'||s[i]=='u'||s[i]=='y'){
                continue;
            
        }
            std::cout << '.';   
           
         s[i]= tolower(s[i]);

         std::cout << s[i];
        
    }
}

int main(void){
    solve();
    return 0;
}
