#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void solve(vector<int> &arr, vector<int> &ans, int i, int n, int sum)
    {
        // Base case
        if (i == n)
        {
            ans.push_back(sum);
            return;
        }

        // Exclude current element
        solve(arr, ans, i + 1, n, sum);

        // Include current element
        solve(arr, ans, i + 1, n, sum + arr[i]);
    }

    vector<int> subsetSums(vector<int> &arr)
    {
        vector<int> ans;
        solve(arr, ans, 0, arr.size(), 0);
        return ans;
    }
};

int main()
{
    // Input array
    vector<int> arr = {1, 2, 3};

    // Create object
    Solution obj;

    // Get all subset sums
    vector<int> ans = obj.subsetSums(arr);

    // Print answer
    cout << "Subset sums are: ";

    for (int sum : ans)
    {
        cout << sum << " ";
    }

    return 0;
}