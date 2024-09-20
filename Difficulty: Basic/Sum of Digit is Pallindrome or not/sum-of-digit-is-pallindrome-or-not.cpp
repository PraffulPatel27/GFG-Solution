//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int isDigitSumPalindrome(int n) {
        // code here
        int sum=0;
        while (n) {
            sum+= n % 10;
            n/= 10;
        }

        int num= sum;
        int new_num=0;
        while (num) {
            new_num= (new_num * 10) + (num % 10);
            num/= 10;
        }

        return (new_num == sum) ? 1 : 0;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isDigitSumPalindrome(N) << "\n";
    }
}

// } Driver Code Ends