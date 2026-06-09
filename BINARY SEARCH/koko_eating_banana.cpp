class Solution {
public:

    long long totalHours(vector<int>& piles, int speed)// for checking the hours req to eating all pile of banana
    {
        long long hours = 0;

        for(int pile : piles)
        {
            hours += (pile + speed - 1) / speed;
        }

        return hours;
    }

    int minEatingSpeed(vector<int>& piles, int h)//bianry search
    {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());

        int ans = high;

        while(low <= high)
        {
            int mid = low + (high - low) / 2;

            long long hours = totalHours(piles, mid);

            if(hours <= h)
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