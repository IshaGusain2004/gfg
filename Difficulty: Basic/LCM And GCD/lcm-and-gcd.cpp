//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  
  
    vector<long long> lcmAndGcd(long long A , long long B) {
        vector<long long> v;
        long long gcd, lcm, a=A,b=B;
        while(A>0 && B>0){
            if(A>B) A=A % B;
            else B=B % A;
        }
        if(A==0) gcd=B;
        else gcd=A;
        
         lcm = a*b/gcd;
        v.push_back(lcm);
        v.push_back(gcd);
        
        return v;
        // code here
    }
   
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A,B;
        
        cin>>A>>B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A,B);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}
// } Driver Code Ends