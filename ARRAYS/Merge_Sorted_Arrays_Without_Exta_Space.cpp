//brute force
// take extar array3 and put the value by comparing arr1 adn arr2 
// now put back th evalue from arr3 to arr1&arr2 by using indexing 
// class Solution {
// public:
//     void merge(vector<int>& nums1, int m,
//                vector<int>& nums2, int n) {

//         vector<int> arr3(m + n);

//         int left = 0;
//         int right = 0;
//         int index = 0;

//         while(left < m && right < n) {

//             if(nums1[left] <= nums2[right]) {
//                 arr3[index] = nums1[left];
//                 left++;
//             }
//             else {
//                 arr3[index] = nums2[right];
//                 right++;
//             }

//             index++;
//         }

//         while(left < m) {
//             arr3[index] = nums1[left];
//             left++;
//             index++;
//         }

//         while(right < n) {
//             arr3[index] = nums2[right];
//             right++;
//             index++;
//         }

//         for(int i = 0; i < m + n; i++) {
//             nums1[i] = arr3[i];
//         }
//     }
// };








// for this question i declared 2 array as given and take pointer which point to last index of first array which have lesser value and 2nd pointer to the first index of large value array
// and if 1st pointer > 2nd then swap [also 1st-- and 2nd ++]
// till 1st pointer = 2nd
// and if its done then both indiv array( one have all lesser value and another have larger value)
// then sort the both array
// and merge them
//----> optiaml approach
#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int arr1[] = {1, 4, 8, 10};
    int arr2[] = {2, 3, 9};

    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);

    int left = n - 1;
    int right = 0;

    while(left >= 0 && right < m) {

        if(arr1[left] > arr2[right]) {

            swap(arr1[left], arr2[right]);

            left--;
            right++;
        }
        else {
            break;
        }
    }

    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);

    cout << "Array 1: ";
    for(int i = 0; i < n; i++) {
        cout << arr1[i] << " ";
    }

    cout << "\nArray 2: ";
    for(int i = 0; i < m; i++) {
        cout << arr2[i] << " ";
    }

    return 0;
}

// another optimal approach is gap method