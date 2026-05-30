#include <iostream>
using namespace std;

void mergesort(int arr[], int low, int mid, int high)
{
    int temp[100];
    int left = low;
    int right = mid + 1;
    int k =low;

    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp[k] = arr[left];
            left++;
            k++;
        }
        else
        {
            temp[k] = arr[right];
            right++;
             k++;
        }
    }
    while (left <= mid)
    {
        temp[k] = arr[left];
        left++;
         k++;
    }
    while (right <= high)
    {
        temp[k] = arr[right];
        right++;
         k++;
    }
    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i];
    }
}

void merge(int arr[], int low, int high)
{
    if (low == high)
    {
        return;
    }
    int mid = (low + high) / 2;
    merge(arr, low, mid);           // yeh left side ke pure array ko individ. tod dega ---> ye recusively call krta rhega merge ko jb tk left == right nhi (yaani koi indivi inidex of array yaani ek elemnt na mil jaye)
    merge(arr, mid + 1, high);      // yeh right side ke pure array ko individ. tod dega
    mergesort(arr, low, mid, high); /// then yeh saare tutet elemtns ko merge krne ka kaam krega
}

int main()
{
    int n;
    cout << "enter size of the array"; // input of array
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    merge(arr, 0, n - 1);

    cout << "Sorted array: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
