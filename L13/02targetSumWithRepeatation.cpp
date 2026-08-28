#include <bits/stdc++.h>
using namespace std;

int solve(int arr[], int target, int s, int size){
    //base case
    if(target == 0) return 1;
    if(target < 0 || s == size) return 0;
        int inc = solve(arr, target-arr[s],s,size);
        int exc = solve(arr,target,s+1,size);
        return inc + exc;
    
}
int main(){
    int arr[] ={2,3,4};
    int target = 6, index = 0;
    int size = 3;
    cout<<solve(arr,target,0, size);
}