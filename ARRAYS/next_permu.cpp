#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    vector<int> arr = {2, 1, 5, 4, 3, 0, 0};

    int n = arr.size();

    // step -1 for finding the break point
    int index = -1;

    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] < arr[i + 1])
        {
            index = i;
            break;
        }
    }

    // agar pura array hi increasing aur koi breakpoint nhi hai toh just rev the array ,because hum alreday last elemnt pr klhade honge aur rev krke first element mil jayega
    if (index == -1)
    {
        reverse(arr.begin(), arr.end());
    }
else// step 2 find slightly greater but minimum elem in all other elem
{
    for(int i = n - 1; i > index; i--)
    {
        if (arr[i] > arr[index])
        {
            swap(arr[i], arr[index]);
             break;
        }
       
    }// step 3 sort remaing.. array
     // kyunki hume breakpnt jb milega usee phele ka array sorted hoga
    reverse(arr.begin() + index + 1, arr.end());
}


return 0;
}