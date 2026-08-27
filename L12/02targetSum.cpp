#include<iostream>
using namespace std;

    bool solve(int arr[], int s, int e, int target){
        //base case
        if(target == 0) return 1;
        if(target < 0 || s > e)return 0;
        return solve(arr, s + 1, e, target) || solve(arr, s + 1, e, target - arr[s]);
        
    }

int main(){
    int arr[] ={1,2,3,4};
    //do using include exclude 
    int s = 0, e = 3;
    int target = 10;
    cout<<solve(arr,s,e, target);
}