#include<iostream>
#include<vector>

using namespace std;
int pivot(int arr[],int s, int e){
    int pos = s;
    for (int i = s; i <= e; i++)
    {
        if (arr[i] <= arr[e])
        {
            swap(arr[i], arr[pos]);
            pos++;
        }
    }
    return pos - 1;
}
void quickSort(int arr[],int s, int e){
        if(s >= e) return;
        int pivott = pivot(arr,s,e);
        quickSort(arr,s,pivott -1);
        quickSort(arr,pivott,e);
    }

int main(){
    int arr[] = {2,4,8,3,1,6};
    quickSort(arr, 0, 5);
    for(int num = 0; num <5; num++){
        cout<<arr[num]<<" ";
    }
}