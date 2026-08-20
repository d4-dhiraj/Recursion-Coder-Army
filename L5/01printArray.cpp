#include<iostream>
using namespace std;
void printArray(int arr[], int size){
    //base case
    int last = size - 1;
    if(last < 0) return;
    printArray(arr,size-1);
    cout<<arr[last]<<" ";
}
int main(){
    int arr[] = {1,2,3,4,5,6};
    int size = 6;
    printArray(arr,size);
}