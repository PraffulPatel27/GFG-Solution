//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this method*/
class Solution {
  public:
    long long max_sum(int a[], int n) {
        // Your code here
        long long S0 = 0; // Initial sum S0
        long long totalSum = 0; // Sum of all array elements
        
        // Calculate S0 and totalSum
        for (int i = 0; i < n; ++i) {
            S0 +=(long long) i * a[i];
            totalSum += a[i];
        }
        
        long long int maxSum = S0;
        int index=n-1;// Initialize maxSum with S0
        long long int currentSum = S0; // Start with S0
        
        // Compute the sum for each rotation and update maxSum
       while(index>0) {
            currentSum +=  totalSum -(long long) n * a[index];
            index--;
            maxSum=max(currentSum,maxSum);
        }
        
        return maxSum;
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        Solution ob;
        cout << ob.max_sum(A, N) << endl;
        /*keeping track of the total sum of the array*/
    }
}

// } Driver Code Ends