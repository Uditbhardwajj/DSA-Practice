
class Solution {
public:

    int lowerBound(vector<int>& arr, int target)//--->lower bound=first occurence
    {
    {
        int low = 0;
        int high = arr.size() - 1;
        int ans = arr.size();

        while(low <= high)
        {
            int mid = low + (high - low) / 2;

            if(arr[mid] >= target)
            {
                ans = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }

        return ans;
    }

    int upperBound(vector<int>& arr, int target)//--->upper boudn=lst occurence
    {
    {
        int low = 0;
        int high = arr.size() - 1;
        int ans = arr.size();

        while(low <= high)
        {
            int mid = low + (high - low) / 2;

            if(arr[mid] > target)
            {
                ans = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }

        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target)// agar wph elem hi array me nhi hua toh phir return none
    {
        int lb = lowerBound(nums, target);

        if(lb == nums.size() || nums[lb] != target)
        {
            return {-1, -1};
        }

        return {lb, upperBound(nums, target) - 1};
    }
};