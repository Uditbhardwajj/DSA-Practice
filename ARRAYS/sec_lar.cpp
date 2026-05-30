#include <iostream>
using namespace std;

void large(int arr[], int n)
{
    if (n < 2){
        cout << "No second largest element";
        return;
    }

    int sec_largest = -1, largest = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            sec_largest = largest;   // keep old largest
            largest = arr[i];
        }
        else if (arr[i] > sec_largest && arr[i] != largest)
        {
            sec_largest = arr[i];
        }
    }

    if (sec_largest == -1)
        cout << "No second largest element";
    else
        cout << "second largest elemnent in array :" << sec_largest;
}

int main()
{
    int n;
    cout << "enter size of the array: ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    large(arr, n);

    return 0;
}