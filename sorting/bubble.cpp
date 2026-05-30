#include <iostream>
using namespace std;
void bubble(int arr[], int n)
{

    for (int i = n - 1; i >= 0; i--)//--> { n-1-->0 } tk hi toh array chalega(yaani ulta)
    {
        for (int j = 0; j <= i - 1; j++)//---> idhar { 0 -> n-1 } tk array chlaega 
        {
            if (arr[j] > arr[j + 1]) // yeh adjacent swap 
            {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
int main()
{
    int n;
    cout << "enter size of the array";// input of array
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bubble(arr, n);
    for (int i = 0; i < n; i++)// output of array
    {
        cout << arr[i] << " ";
    }

    return 0;
}