#include <iostream>
#include <string>
#include <unordered_map>

void solve() {
    int n;
    std::cin >> n;

    std::unordered_map<std::string, int> mp;

    while (n--) {
        std::string s;
        std::cin >> s;
        mp[s]++;
    }

    int ans = 0;
    std::string result;

    for (const auto& num : mp) {
        if (num.second > ans) {
            ans = num.second;     // Number of goals
            result = num.first;   // Team name
        }
    }

    std::cout << result << '\n';
}

int main() {
    solve();
    return 0;
}