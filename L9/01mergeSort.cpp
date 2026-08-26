#include<iostream>
#include<vector>
using namespace std;

void merge(int arr[], int s, int mid, int e){
    vector<int>temp;
    int left = s, right = mid + 1, index = 0;
    while(left <= mid && right <= e){
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
            index++;
        }else{
            temp.push_back(arr[right]);
            right++;
            index++;
        }
    }
    while(left <= mid){
        temp.push_back(arr[left]);
       
        left++;
    }
    while(right <= e){
        temp.push_back(arr[right]);
        right++;
    }
    index = 0;
    while(s <= e){
        arr[s] = temp[index];
        s++;
        index++;
    }
}

void mergeSort(int arr[], int s, int e){
    if(s == e) return;
    //leftpart
    int mid = s + (e - s)/2;
    mergeSort(arr, s, mid);
    //rightPart
    mergeSort(arr, mid + 1, e);

    merge(arr,s, mid,e);
}


int main(){
    int arr[] = {1,4,3,8,3,2,4,9,5,7};
    int size = 10;
    mergeSort(arr,0 , size - 1);
    for(int i: arr){
        cout<<i<<" ";
    }
}