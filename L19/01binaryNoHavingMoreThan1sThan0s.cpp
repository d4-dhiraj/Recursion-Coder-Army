#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void solve(vector<string> &ans, int n, string &temp, int zeros, int ones)
    {
        if (temp.length() == n)
        {
            ans.push_back(temp);
            return;
        }

        // We can add 0 only when zeros < ones
        if (zeros < ones)
        {
            temp.push_back('0');
            solve(ans, n, temp, zeros + 1, ones);
            temp.pop_back();
        }

        // We can always add 1
        temp.push_back('1');
        solve(ans, n, temp, zeros, ones + 1);
        temp.pop_back();
    }

    vector<string> nBitBinary(int n)
    {
        vector<string> ans;
        string temp;

        solve(ans, n, temp, 0, 0);

        // Sort in descending order
        sort(ans.begin(), ans.end(), greater<string>());

        return ans;
    }
};

int main()
{
    int n;
    cin >> n;

    Solution obj;
    vector<string> ans = obj.nBitBinary(n);

    for (string s : ans)
    {
        cout << s << " ";
    }

    return 0;
}