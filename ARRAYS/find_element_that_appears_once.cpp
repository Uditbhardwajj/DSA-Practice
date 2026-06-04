// Single Number

// optimal-->Observation:
// Every element appears twice except one.

// XOR properties:
// a ^ a = 0
// a ^ 0 = a

// Therefore:
// All duplicate numbers cancel each other.
// Only the unique number remains.
// TC: O(n)
// SC: O(n)

int ans = 0;

for(int num : nums)
{
    ans ^= num;
}

return ans;




//brute->for each element TC: O(n²)


    count frequency

    if frequency == 1
        return element






    //   better -->using hash map
//     TC: O(n)
// SC: O(n)


  unordered_map<int,int> mp;

for(int num : nums)
    mp[num]++;

for(auto it : mp)
{
    if(it.second == 1)
        return it.first;
}