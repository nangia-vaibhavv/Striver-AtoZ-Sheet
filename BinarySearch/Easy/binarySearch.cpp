class Solution
{
public:
    //     O(logn) therefore BS
    int search(vector<int> &nums, int target)
    {
        // int n=nums.size();
        // int low=0, high=n-1;
        // while(low<=high)
        // {
        //     int mid=(low+high)/2;
        //     if(target==nums[mid])return mid;
        //     else if(target>nums[mid])low=mid+1;
        //     else high=mid-1;
        // }
        // return -1;

        //         STL
        if (binary_search(nums.begin(), nums.end(), target))
        {
            return lower_bound(nums.begin(), nums.end(), target) - nums.begin();
        }
        else
            return -1;
    }
};