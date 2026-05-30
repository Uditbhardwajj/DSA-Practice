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
            for (int k = j+1; k < 5; k++)
            {
                if (arr[i]+arr[j]+arr[k]==target)
            {
                cout<<arr[i]<<endl;
                cout<<arr[j]<<endl;
                cout<<arr[k];
            }
            }
            
         
        }
        
    }
    
    return 0;
}