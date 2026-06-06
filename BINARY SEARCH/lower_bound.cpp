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
            ans = mid;// may be my ans 
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return ans;
}