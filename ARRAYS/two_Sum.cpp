#include <iostream>
using namespace std;

int main() {
    int arr[]={2,6,5,8,11};
    int target;
    cout<<"tell the target no.";
    cin>>target;
    for (int i = 0; i < 5 ; i++)
    {
        for (int j = i+1; j < 5; j++)
        {
            if (arr[i]+arr[j]==target)
            {
                cout<<arr[i]<<endl;
                cout<<arr[j];
            }
         
        }
        
    }
    
    return 0;
}