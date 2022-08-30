class Solution {
public:
//     O(n)approach using map 
    int singleNonDuplicate(vector<int>& nums) {
        // unordered_map<int,int>mp;
        // for(int i=0;i<nums.size();i++)
        // {
        //     mp[nums[i]]++;
        // }
        // for(auto it:mp)
        // {
        //     if(it.second==1)
        //         return it.first;
        // }
        // return NULL;
        
        
//         without using map i.e O(logn)
      int s=0;
        int e=nums.size()-1;
        if(nums.size()==1){
            return nums[0];
        }
        while(s<=e){
            if(nums[s]!=nums[s+1]){
                return nums[s];
            }
            if(nums[e]!=nums[e-1]){
                return nums[e];
                
            }
            s+=2;
            e-=2;
        }
        return -1;
    }
};