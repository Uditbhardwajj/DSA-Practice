#include <iostream>
using namespace std;

int main() {
    int n;
    int larg=arr[0];

   for ( int i = 0; i < n; i++)
   {
    if(larg<arr[i]){
        larg=arr[i];
    }
   }
   cout<<larg;
   
    return 0;
}