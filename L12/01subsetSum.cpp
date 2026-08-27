#include <iostream>
#include<vector>
using namespace std;

void solve(int arr[], int s, int e, int sum, vector<int>&ans)
{
    //base case
    if(s > e){
        ans.push_back(sum);
        return;
    }

    //exclude
    solve(arr, s+1, e, sum, ans);

    //include
    sum = sum + arr[s];
    solve(arr,s+1, e, sum, ans);
}

int main()
{
    int arr[] = {1, 2, 3};
    // do using include exclude
    int s = 0, e = 2;
    vector<int>ans;
    solve(arr, s, e, 0, ans);

    for(int i: ans){
        cout<<i<<" ";
    }
}