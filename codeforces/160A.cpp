#include <iostream>
#include <string>

void solve(){
  int n;
  std::cin >> n;
  std::vector<int>arr(n);
  for(int i = 0;i<n;i++){std::cin >> arr[i];}
  int sum = 0;
  for(int c:arr){sum+=c;}
  int mx = *std::max_element(arr.begin(),arr.end());
  int ans =- std::max(mx,ans);
  std::cout << ans << '\n';
  
   

}

int main(void){
  solve();
}
