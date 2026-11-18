#include <iostream>
#include <vector>
#include <numeric>

void solve(){
   long long  n;
    std::cin >> n;
    long long cnt = 0;

    while(n--){
      std::vector<long long>arr(3);
      for(long long i = 0;i<3;i++){std::cin >> arr[i];}
      long long sum = 0;
      for(long long i =0 ;i<arr.size();i++){
          sum+=arr[i];
      }
      if(sum>=2) cnt++;
  }
    std::cout << cnt << '\n';
}
int main(void){
  solve();
}
