//better solution 
// #include <iostream>
// using namespace std;

// int main() {
//     int k;
//     int count=0;
//     int arr[]={1,2,3,4,5,3,1,2,3,4};
//      int n = sizeof(arr) / sizeof(arr[0]);
//     cout<<"enter the value ok 'K'";
//     cin>>k;
//     for (int i = 0; i < n; i++)
//     {
//         int sum=0;
//         for (int j = i; j < n; j++)
//         {
//            sum+=arr[j];
//            if (sum==k)
//         {
//             count++;
//         }
        
//         }
        
//     }
    
//       cout << "Number of subarrays with sum " << k << " = " << count;
//     return 0;
// }

// Brute force 
#include <iostream>
using namespace std;

int main() {
      int k;
    int count=0;
    int arr[]={1,2,3,4,5,3,1,2,3,4};
     int n = sizeof(arr) / sizeof(arr[0]);
    cout<<"enter the value ok 'K'";
    cin>>k;
    for (int i = 0; i < n; i++)
    {
        
        for (int j = i; j < n; j++)
        {
            int sum=0;
            for (int l = i; l < j; l++)
            {
                sum+=arr[l];
           
            }
              if (sum==k)
                {
                    count++;
                }
        }
        
    }
    cout << "Number of subarrays with sum " << k << " = " << count;
    
    return 0;
}