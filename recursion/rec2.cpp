//print N no. with rec from 1--->n and n---->1 
#include <iostream>
using namespace std;

void f(int i, int n)
{
    if (i > n)
    {
        return;
    }
    cout << n << endl;
    f(i, n - 1);
}

int main()
{
    int n;

    cout << "enter number";
    cin >> n;
    f(1, n);
    return 0;
}