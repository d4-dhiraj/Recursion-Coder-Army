#include <iostream>
#include<algorithm>

using namespace std;
int maxElement(int arr[], int size)
{
    int last = size - 1;
    if (last == 0)
        return arr[last];
    return max(arr[last], maxElement(arr,size - 1));
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 4, 8, -2, 3};
    int size = 10;
    cout << maxElement(arr, size) << endl;
}