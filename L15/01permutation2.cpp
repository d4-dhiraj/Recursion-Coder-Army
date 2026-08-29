#include <bits/stdc++.h>
using namespace std;

void permutation(vector<int> &nums, vector<vector<int>> &ans, int index)
{
    vector<bool>visited(21,0);
    // base case
    if(index == nums.size())
    {
        ans.push_back(nums);
        return;
    }
    for (int i = index; i < nums.size(); i++)
    {
        if (visited[nums[i] + 10] == 0)
        {
          
            swap(nums[i], nums[index]);
            permutation(nums, ans, index+1);
            swap(nums[i], nums[index]);
            visited[nums[i] + 10] = 1;
        }
    }
}

int main()
{
    vector<vector<int>> ans;
    vector<int> nums = {1, 2, 1};
    int index = 0;

    permutation(nums, ans, index);

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[0].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}