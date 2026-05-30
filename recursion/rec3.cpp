//print sum of N natural number

// #include <iostream>
// using namespace std;
// void f(int i,int n){
//     if(i>n){
//         return;
//     }
//     cout<<i*(i+1)/2<<endl;
//     f(i+1,n);
// }

// int main() {
//     int n;
//     cout<<"enter the number ";
//     cin>>n;
//     f(1,n);

// }


// #include <iostream>
// using namespace std;
// void f(int i,int n){
//     if(0==n){
//        cout<<i;
//     }
//     f(n+i,n-1);
// }

// int main() {
//     int n;
//     cout<<"enter the number ";
//     cin>>n;
//     f(0,n);

// }


#include <iostream>
using namespace std;
int f(int n){
    if(0==n){
       return 0;
    }
    return n + f(n-1);
    

}

int main() {
    int n;
    cout<<"enter the number ";
    cin>>n;
    cout << f(n) << endl;
}

