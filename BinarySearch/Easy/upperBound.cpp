//{ Driver Code Starts

#include <bits/stdc++.h>

using namespace std;

pair<int, int> getFloorAndCeil(int arr[], int n, int x);

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
        auto ans = getFloorAndCeil(arr, n, x);
        cout << ans.first << " " << ans.second << "\n";
    }
    return 0;
}

// } Driver Code Ends

pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
   // code here
   int i;
   int mx=INT_MIN;
   int mn=INT_MAX;
   int fl;
   int cl;
   int flf=INT_MIN;
   int clf=INT_MAX;
   int flag1=0,flag2=0;
   pair<int,int> pr(2,-1);
   
   for(i=0;i<n;i++){
       mx=max(mx,arr[i]);
       mn=min(mn,arr[i]);
   }
   for(i=0;i<n;i++){
       if(arr[i] <=x && arr[i]>=mn){
           fl=arr[i];
           flag1++;
       
       if(fl>flf){
           flf=fl;
       }}
   }
   pr.first=flf;
   for(i=0;i<n;i++){
       if(arr[i] >=x && arr[i]<=mx){
           cl=arr[i];
           flag2++;
       
       if(cl<clf){
           clf=cl;
       }}
   }
   pr.second=clf;
   if(flag1 ==0){
       pr.first=-1;
       return pr;
   }
   else if(flag2 ==0){
       pr.second =-1;
       return pr;
   }
   return pr;

}