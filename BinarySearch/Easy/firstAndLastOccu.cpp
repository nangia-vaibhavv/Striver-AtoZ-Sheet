class Solution {
public:
    int first(vector<int>& nums, int target)
    {
         int n=nums.size();
        int low=0, high=n-1;
        int ans=-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(target==nums[mid])
            {
                ans=mid;
                high=mid-1;
            }
            else if(target<nums[mid])
            {
                high=mid-1;
            }
            else low=mid+1;
        }
        return ans;
    }
     int last(vector<int>& nums, int target)
    {
         int n=nums.size();
        int low=0, high=n-1;
        int ans=-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(target==nums[mid])
            {
                ans=mid;
                low=mid+1;
            }
            else if(target<nums[mid])
            {
                high=mid-1;
            }
            else low=mid+1;
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;
        int f=first(nums,target);
        int l=last(nums,target);
        ans.push_back(f);
        ans.push_back(l);
        return ans;
    }
};