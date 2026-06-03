// max_product_subarray
//---->better solution
// O(N2)
//brute is same as all subarray question which is O(n3)
#include <iostream>
#include <climits>
using namespace std;

int main() {

    int arr[] = {1, 2, 3, 4, 5, 3, 1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int maxi = INT_MIN;

    for (int i = 0; i < n; i++) {
        int product = 1;

        for (int j = i; j < n; j++) {
            product *= arr[j];   // Extend subarray
            maxi = max(maxi, product);
        }
    }

    cout << "Maximum Product = " << maxi;

    return 0;
}