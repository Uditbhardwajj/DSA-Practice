 //better approach
 #include <iostream>
 using namespace std;

int main() {
    int k;
    int count=0;
    int arr[]={4,2,2,6,4};
     int n = sizeof(arr) / sizeof(arr[0]);
    cout<<"enter the value ok 'K'";
    cin>>k;
    for (int i = 0; i < n; i++)
    {
        int xr=0;
        for (int j = i; j < n; j++)
        {
           xr=xr^arr[j];
           if (xr==k)
        {
            count++;
        }

        }

    }

      cout << "Number of Subarrays with xor K  " << k << " = " << count;
    return 0;
}


//optimal approach
