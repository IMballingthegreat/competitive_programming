#include <iostream>
#include <string>
void solve(){
  std::string s;
  std::cin >> s;
  std::string digit;
  for(char ch : s){
    if( ch!='+'){
      digit+=ch;
    }
  }
  std::sort(digit.begin(),digit.end());
  for(std::size_t i =0;i<digit.size();++i){
    if(i>0){
      std::cout << '+';
    }
    std::cout << digit[i] ;
  }
  std::cout << '\n';
}
int main(){
  solve();
  return 0;
}
