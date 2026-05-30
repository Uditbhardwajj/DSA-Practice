//print name with recursion n time 
#include <iostream>
using namespace std;

void f(int i,int n){
    if (i>n)
    {
     return;
    }
    cout<<"udit"<<endl;
    f(i+1,n);
}



int main() {
int n ;

    cout<<"enter number";
    cin>>n;
    f(1,n);
   return 0;
}