#include <iostream>
using namespace std;
void number(int i,int n){
   if (n>i)
   {
    return;
   }
   cout<<i<<endl;
   number(i-1,n);
   
    

}
int main() {
    int n,i;
    cout<<"Enter the number";
    cin>>n;
    number(n,1);
    return 0;
}