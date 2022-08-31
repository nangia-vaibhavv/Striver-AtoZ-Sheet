//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

  

// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        // Your code goes here   
        int low=0,high=x,ans=-1;
        while(low<=high)
        {
            long mid=low+(high-low)/2;
            long midSqr=mid*mid;
            if(midSqr==x)
            {
                return mid;
            }
            else if(midSqr<x)
            {
                low=mid+1;
                ans=mid;
            }
            else high=mid-1;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		Solution obj;
		cout << obj.floorSqrt(n) << endl;
	}
    return 0;   
}

// } Driver Code Ends