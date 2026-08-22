#include<iostream>
using namespace std;
int linearSearch(int arr[], int target,int index){
    if(arr[index] == target){
        return index;
    }
    return linearSearch(arr, target, index - 1);
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int target = 5;
    int index = 9;
    cout<<linearSearch(arr, target, index);

}