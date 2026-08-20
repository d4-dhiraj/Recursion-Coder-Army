#include<iostream>
using namespace std;
int minElement(int arr[], int size,int mini){
    int last = size - 1;
    if(last < 0)return mini;
    if(mini > arr[last]){
        minElement(arr, size - 1, arr[last]);
    }else{
        minElement(arr,size-1,mini);
    }
}
int main(){
    int arr[] = {1,2,3,4,5,6,4,8,2,3};
    int size = 10;
    cout<<minElement(arr,size,arr[0])<<endl;
}