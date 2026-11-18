#include <iostream>
void solve(){
  int n;
  std::cin >> n;
  std::string s;
  std::cin >> s;
  int cnt =0;
  for(int i =0;i<n;i++){
    if(s[i]==s[i-1]){
      cnt++;
    }
  }
  std::cout << cnt << '\n';
}
int main(void){
  solve();
  return 0;
}
