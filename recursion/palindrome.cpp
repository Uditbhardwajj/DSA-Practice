// #include <iostream>
// using namespace std;

// int main() {
//     int rev=0,rem,n,temp;
//     cout<<"enter a number :";
//     cin>>n;
//     temp=n;
//     while (n!=0)
//     {
//        rem=n%10;
//        rev=rem+(rev*10);
//        n=n/10;
//     }
//     if (rev==temp)
//     {
//         cout<<"PALINDROME ";

//     }else{
//         cout<<"NOT PALINDROME";
//     }
    
    
//     return 0;
// }
class Solution {
public:
    bool isPalindrome(int x) {
          if (x < 0) return false; 
        int rem;

        long long rev = 0;
     
        int temp=x;
        while(x!=0){
            rem=x%10;
            rev=(rev*10)+rem;
            x=x/10;
        }
        return temp==rev;
    }
};