#include <bits/stdc++.h>
using namespace std;

void permutation(vector<int>&nums, vector<vector<int>>&ans, int index){
    //base case

    if(index == nums.size()){
        ans.push_back(nums);
        return;
    }
    for(int i = index; i < nums.size(); i++){
        swap(nums[i], nums[index]);
        permutation(nums,ans,index+1);
        swap(nums[i], nums[index]);
    }
}

int main(){
    vector<vector<int>> ans;
    vector<int> nums = {1, 2, 3};
    permutation(nums, ans, 0);

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[0].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}