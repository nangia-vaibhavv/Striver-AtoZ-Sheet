class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0, high=n-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(nums[mid]==target)return true;
//             check if right half is sorted
            if((nums[low] == nums[mid]) && (nums[high] == nums[mid]))
            {
                low++;
                high--;
                 continue;
            }
            //  if(nums[mid]<nums[high])
            // {
            //     if(target>=nums[mid] && nums[mid]<=nums[high])
            //     {
            //         low=mid+1;
            //     }
            //     else high=mid-1;
            // }
            // else
            // {
            //     if(target>=nums[low] && target<nums[mid]){
            //         high=mid-1;
            //     }
            //     else low=mid+1;
            // }
             if(nums[mid]>=nums[low])
            {
//                 array is left sorted
                if(target>=nums[low] && target<nums[mid])
                {
                    high=mid-1;
                }
                else low=mid+1;
            }
            else 
            {
                if(target>=nums[mid] && target<=nums[high])
                {
                    low=mid+1;
                }
                else high=mid-1;
            }
        }
        return false;
    }
};