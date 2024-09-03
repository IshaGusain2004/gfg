//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int evenlyDivides(int N){
         
    int originalNumber = N;
    int count = 0;
    
    while (N > 0) {
        int digit = N % 10;  // Extract the last digit
        if (digit != 0 && originalNumber % digit == 0) {  // Check if digit divides originalNumber evenly
            count++;
        }
        N /= 10;  // Remove the last digit
    }
    
    return count;
        //code here
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends