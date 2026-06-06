//mujhe koi elem diya hoga aur mujhe pta lgana hai ki woh value sorted array me konse index pr anni chiye 
int lowerBound(vector<int>& arr, int target)
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