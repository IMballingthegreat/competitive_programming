#include <bits/stdc++.h>

void solve(){
   int n;
   std::cin >> n;
   std::vector<int>arr(n);
   int total = 0;
   for(int i =0;i<n;i++){
    std::cin >> arr[i];
    total+=arr[i];
   }
   std::sort(arr.rbegin(),arr.rend());
   int mysum =0;
   int count = 0;
   for(int i = 0;i<n;i++){
    mysum +=arr[i];
    count++;
    if(mysum>total-mysum){
      break;
    }
   }
   std::cout << count << '\n';
   

}
int main(void){
  solve();
  return 0;
}