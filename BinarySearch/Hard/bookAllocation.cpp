bool isPossible(vector<int> arr, int n, int m,int mid)
{
    int studentCount=1;
    int pageSum=0;
    for(int i=0;i<n;i++)
    {
        if(pageSum+arr[i]<=mid)
        {
            pageSum+=arr[i];
        }
        else
        {
            studentCount++;
            pageSum=0;
            if(studentCount>m || arr[i]>mid)return false;
            pageSum+=arr[i];
        }
    }
    return true;
}
int allocateBooks(vector<int> arr, int n, int m) {
    // Write your code here.
    int low=0;
    int sum=0;
    int ans=0;
    for(int i=0;i<n;i++)sum+=arr[i];
    int high=sum;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(isPossible(arr,n,m,mid))
        {
            ans=mid;
            high=mid-1;
        }
        else low=mid+1;
    }
    return ans;
}