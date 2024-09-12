//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<long long> factorialNumbers(long long n) {
        vector<long long> factorials;
        long long fact = 1,i =1;
        while(fact <= n)
        {
            factorials.push_back(fact);
            i++;
            //// Check for overflow before computing the next factorial
            if (fact > LLONG_MAX / i) {
            break;
        }
            
          fact = fact*i;
        }
         return factorials;
        // Write Your Code here
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        cin >> N;
        Solution ob;
        vector<long long> ans = ob.factorialNumbers(N);
        for (auto num : ans) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends