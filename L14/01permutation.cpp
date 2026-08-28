#include <bits/stdc++.h>
using namespace std;

void permutation(vector<int>&nums,vector<vector<int>>&ans, vector<int>&temp,vector<bool>&visited){
    //base case
    if(temp.size() == nums.size()){
        ans.push_back(temp);
        return;
    }
    for(int i = 0; i < nums.size(); i++){
        if(visited[i] == 0){
            visited[i] = 1;
            temp.push_back(nums[i]);
            permutation(nums,ans,temp,visited);
            temp.pop_back();
            visited[i] = 0;
        }
    }
}

int main(){
    vector<vector<int>>ans;
    vector<int>nums = {1,2,3};
    vector<int>temp;
    vector<bool>visited(nums.size(),0);

    permutation(nums,ans,temp,visited);


    for(int i = 0; i < ans.size(); i++){
        for(int j = 0; j< ans[0].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}