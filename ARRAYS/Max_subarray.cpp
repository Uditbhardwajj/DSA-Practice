#include <iostream>
using namespace std;
int sum=0;
int MAXI=INT8_MIN;
int n;


int main() {
    for (int i = 0; i < n; i++){
        sum+=arr[i];
        if (sum>MAXI)
        {
            MAXI=sum;
        }
        if (sum<0)
        {
            sum=0;
        }
        

    }
    

    
    return MAXI;
}