//{ Driver Code Starts

#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
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
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    // code here
	    vector<int>nums;
	    for(int i=0;i<n;i++)
	    {
	        nums.push_back(arr[i]);
	    }
	    
	    int f=first(nums,x);
	    int l=last(nums,x);
	    if(f==-1 && l==-1)
	    {
	        return 0;
	    }
	    int res=l-f+1;
	    return res;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends