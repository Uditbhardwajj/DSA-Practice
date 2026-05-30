//for printing the psecific element 
//brute force
#include <iostream>
using namespace std;
int NcR(int N,int r){
       int res = 1;
    for (int i = 0; i < r; i++)
    {
        res = res * (N - i);
        res = res / (i+1);
    }

    return res;
}
int main()
{
    int N,r;
    cout<<"enter the value of row and column";
    cin>>N>>r;
  cout<<NcR(N-1, r-1);
}