//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int nthFibonacci(int n){
        // code here
          long long int mod = 1000000007;
    if (n <= 1) 
    {
        return n;
    }
 
    int previousFib = 0, currentFib = 1;
    for (int i = 0; i < n - 1; i++)
    {
        int newFib = (previousFib + currentFib) % mod;
      
        previousFib = currentFib;
        currentFib = newFib;
    }
 
    return currentFib;
   }
    
    long long int nthFibonacci(long long int n){
        // code here
         
         return nthFibonacci (n);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends