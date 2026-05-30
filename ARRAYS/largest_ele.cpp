#include <iostream>
using namespace std;

void large(int arr[], int n){
    if (n == 0){
        cout << "array is empty";
        return;
    }

    int largest = arr[0];

    for (int i = 1; i < n; i++){
        if (largest < arr[i]){
            largest = arr[i];
        }
    }

    cout << "largest elem: " << largest;
}

int main() {
    int n;
    cout << "enter size of the array: ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    large(arr, n);

    return 0;
}