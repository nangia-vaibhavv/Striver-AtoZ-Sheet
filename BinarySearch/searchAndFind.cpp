class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0,high=n-1;
        int ans=-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(target==nums[mid])return mid;
            else if(target>nums[mid]){low=mid+1;ans=low;}
            else high=mid-1;
        }
        return low;
    }
};