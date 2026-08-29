#include <bits/stdc++.h>

using namespace std;

void solve(vector<int>& coins, int sum, int index, int& ans) {
    // Base case
    if (sum < 0) {
        return;
    }

    if (sum == 0) {
        ans++;
        return;
    }

    // Recursive case
    for (int i = index; i < coins.size(); i++) {
        solve(coins, sum - coins[i], i, ans);
    }
}

int countWays(vector<int>& coins, int sum) {
    int ans = 0;
    solve(coins, sum, 0, ans);
    return ans;
}

int main() {
    vector<int> coins = {1, 2, 3};
    int sum = 4;

    int ans = countWays(coins, sum);

    cout << "Number of ways: " << ans << endl;

    return 0;
}