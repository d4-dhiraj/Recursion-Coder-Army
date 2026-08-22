#include <iostream>
using namespace std;
int binarySearch(int arr[], int target, int s, int e)
{
    int mid = s + (e - s)/2;
    if (arr[mid] == target)
    {
        return mid;
    }
    else if(mid > target)
        return binarySearch(arr, target, s, mid - 1);
    else
        return binarySearch(arr, target, mid + 1, e);
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target = 5;
    int s = 0;
    int e = 9;
    cout << binarySearch(arr, target, s, e);
}