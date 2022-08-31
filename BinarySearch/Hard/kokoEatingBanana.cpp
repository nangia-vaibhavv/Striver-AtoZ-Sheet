class Solution {
public:
        
    long long calculate(vector<int>& piles,int mid){
        long long h=0;
        for(int i=0;i<piles.size();i++){
           
            h+=ceil((double)piles[i]/(double)mid);
        }
        return h;
    }
    
    int minEatingSpeed(vector<int>& piles, int h) {
        
        int low=1,high=INT_MIN;
        for(int i=0;i<piles.size();i++){
            high=max(high,piles[i]);
        }
        int n=piles.size();
        if(h<n)
            return -1;
        
        int ans=high;
        while(low<=high){
            int mid=low+(high-low)/2;
            long long temp=calculate(piles,mid);
            if(temp<=h){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return ans;
    }
};