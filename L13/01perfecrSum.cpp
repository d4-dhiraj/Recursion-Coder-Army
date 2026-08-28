#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int solve(vector<int> &arr, int target, int s)
    {
        int e = arr.size() - 1;

        // Base case
        if (s > e)
        {
            if (target == 0)
                return 1;
            else
                return 0;
        }

        int inc = solve(arr, target - arr[s], s + 1);
        int exc = solve(arr, target, s + 1);

        return inc + exc;
    }

    int perfectSum(vector<int> &arr, int target)
    {
        int s = 0;
        int ans = solve(arr, target, s);
        return ans;
    }
};

int main()
{
    int n, target;

    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter target: ";
    cin >> target;

    Solution obj;

    int ans = obj.perfectSum(arr, target);

    cout << "Number of subsets: " << ans << endl;

    return 0;
}