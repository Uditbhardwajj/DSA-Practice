class Solution {
public:

    bool canMake(vector<int>& bloomDay, int m, int k, int day)//--->min days req fucn
    {
        int flowers = 0;
        int bouquets = 0;

        for(int bloom : bloomDay)
        {
            if(bloom <= day)
            {
                flowers++;
            }
            else
            {
                bouquets += flowers / k;
                flowers = 0;
            }
        }

        bouquets += flowers / k;

        return bouquets >= m;
    }

    int minDays(vector<int>& bloomDay, int m, int k)//applying binary seaxrch
    {
        long long need = 1LL * m * k;

        if(need > bloomDay.size())
            return -1;

        int low = *min_element(bloomDay.begin(), bloomDay.end());
        int high = *max_element(bloomDay.begin(), bloomDay.end());

        int ans = -1;

        while(low <= high)
        {
            int mid = low + (high - low) / 2;

            if(canMake(bloomDay, m, k, mid))
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
};