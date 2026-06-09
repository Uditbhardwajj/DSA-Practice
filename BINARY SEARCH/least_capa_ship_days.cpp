// Capacity to Ship Packages within D Days
class Solution {
public:

    int findDays(vector<int>& weights, int cap)
    {
        int days = 1;
        int load = 0;

        for(int weight : weights)
        {
            if(load + weight > cap)
            {
                days++;
                load = weight;
            }
            else
            {
                load += weight;
            }
        }

        return days;
    }

    int shipWithinDays(vector<int>& weights, int days)
    {
        int low = *max_element(weights.begin(), weights.end());

        int high = accumulate(weights.begin(),
                              weights.end(),
                              0);

        while(low <= high)
        {
            int mid = low + (high - low) / 2;

            int requiredDays = findDays(weights, mid);

            if(requiredDays <= days)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }

        return low;
    }
};