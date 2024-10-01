//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
     
    vector<vector<int>> result; // to store subsets which are present in temp vector
    
    void solve(vector<int>&a,vector<int>temp,int idx)
    {
        if(idx>=a.size())
        {
            result.push_back(temp);
            return ;
        }
        
        //take
        temp.push_back(a[idx]);
        solve(a,temp,idx+1);
        
        // not take
        temp.pop_back();
        solve(a,temp,idx+1);

    }

 

    vector<vector<int> > subsets(vector<int>& a) {
        // code here
        vector<int>temp;
        
        solve(a,temp,0);
        
        sort(begin(result),end(result));
        
        return result;
    }


    
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n;

        vector<int> array;
        for (int i = 0; i < n; i++) {
            cin >> x;
            array.push_back(x);
        }

        Solution ob;
        vector<vector<int> > res = ob.subsets(array);

        // Print result
        for (int i = 0; i < res.size(); i++) {
            for (int j = 0; j < res[i].size(); j++)
                cout << res[i][j] << " ";
            cout << endl;
        }
    }

    return 0;
}
// } Driver Code Ends