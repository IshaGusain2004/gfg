//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution {
  public:
    long long int floorSqrt(long long int n) {
       if(n==0 || n==1) return n;
       long long int start=1,end=n,ans;
       while(start<=end){
           long long mid=(start+end)/2;
           if(mid*mid==n) return mid;
           if(mid*mid>n) end=mid-1;
           else {
           ans=mid;
           start=mid+1;
           
       }
       }
       return ans;
        // Your code goes here
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        Solution obj;
        cout << obj.floorSqrt(n) << endl;
    }
    return 0;
}

// } Driver Code Ends