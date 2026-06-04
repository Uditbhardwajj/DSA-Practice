
//Majority element (for n/2>)
class Solution {
public:

//Moore Algo 
    int majorityElement(vector<int>& nums) {

        int count = 0;
        int candidate = 0;

        for(int num : nums)
        {
            if(count == 0)
                candidate = num;

            if(num == candidate)
                count++;
            else
                count--;
        }



        //verify krne ke liye 
        int freq = 0;

for(int num : nums)
{
    if(num == candidate)
        freq++;
}

if(freq > nums.size()/2)
    return candidate;

return -1;

        return candidate;
    }
};