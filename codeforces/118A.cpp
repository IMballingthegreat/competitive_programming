#include <iostream>
#include <string>
void solve(){
    std::string s;
    std::cin >> s;
   for(int i =0;i<s.size();i++){
    if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U' || s[i]=='O'||s[i]=='Y'||
        
        s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u' || s[i]=='y'){
        continue;
        
    }
        std::cout << '.' << static_cast<char>(tolower(s[i]));
    
    

   } 

}
int main(void){
    solve();
    return 0;
}