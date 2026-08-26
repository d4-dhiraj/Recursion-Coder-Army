#include <iostream>
#include <vector>

using namespace std;

int merge(int arr[],int s, int mid, int e){
    int count = 0;
    vector<int>temp;
    int left = s, right = mid + 1;
    while(left <= mid && right <= e){
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
        }else{
            count = count + mid - left + 1;
            temp.push_back(arr[right]); 
            right++;
        }
    }
    while (left <= mid)
    {
        temp.push_back(arr[left]);

        left++;
    }
    while (right <= e)
    {
        temp.push_back(arr[right]);
        right++;
    }
    int index = 0;
    while (s <= e)
    {
        arr[s] = temp[index];
        s++;
        index++;
    }
    return count;
}


int mergeSort(int arr[], int s, int e){
    if(s>=e)return 0;
    int mid = s + (e - s)/2;
    //left part
    int lftcnt = mergeSort(arr,s,mid);
    //right part
    int rytcnt = mergeSort(arr,mid + 1, e);

    int cnt = merge(arr,s, mid,e);
    return cnt + lftcnt + rytcnt;
}
int main()
{
    int arr[] = {2, 4, 8, 3, 1, 6};
    int s = 0, e = 5;
    int mid = s +(e-s)/2;
    cout<<mergeSort(arr,s,e);
    
    
}