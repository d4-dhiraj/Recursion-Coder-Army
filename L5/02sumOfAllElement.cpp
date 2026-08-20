#include<iostream>
using namespace std;
int sumArray(int arr[], int size){
    int last = size - 1;
    if(last < 0) return 0;
    return arr[last] + sumArray(arr,size -1);
}
int main(){
    int arr[] = {1,2,3,4,5,6};
    int size = 6;
    cout<<sumArray(arr,size);
}