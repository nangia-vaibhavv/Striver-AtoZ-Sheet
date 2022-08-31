class Solution {
public:
    bool isPossible(vector<int>& weights, int days,int mid)
    {
        int weightSum=0;
        int dayCount=1;
        for(int i=0;i<weights.size();i++)
        {
           weightSum+=weights[i];
            if(weightSum>mid)
            {
                dayCount++;
                weightSum=weights[i];
            }
            if(dayCount>days)return false;
        }
        return true;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low=0,high=0,ans=0;
        for(int i=0;i<weights.size();i++)
        {
            low=max(low,weights[i]);
            high+=weights[i];
        }
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(isPossible(weights,days,mid))
            {
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return ans;
    }
};