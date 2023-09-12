//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int isPerfectNumber(long long N) {
        // code here
        if (N <= 1) {
        return 0; // Perfect numbers are positive integers greater than 1.
    }

    long long sum = 1; // Start with 1 because 1 is a proper divisor for all positive integers.

    for (long long i = 2; i * i <= N; i++) {
        if (N % i == 0) {
            sum += i;
            if (i != N / i) {
                sum += N / i; // Add the other divisor if it's not equal to i.
            }
        }
    }

    return (sum == N) ? 1 : 0;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        
        cin>>N;

        Solution ob;
        cout << ob.isPerfectNumber(N) << endl;
    }
    return 0;
}
// } Driver Code Ends