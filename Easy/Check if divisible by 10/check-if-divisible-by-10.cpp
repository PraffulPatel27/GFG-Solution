//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  int isDivisibleBy10(string bin) {
        // code here
        int n = bin.length();
        int num = 0;
        int i = 0;
        
        while (i < n) {
            num = ((num*2) + (bin[i] - '0'));
            num = num % 10;
            i++;
        }
        
        return (num == 0) ? 1 : 0;
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    while (t--) {
        string bin;
        cin >> bin;
        Solution ob;
        cout << ob.isDivisibleBy10(bin);
        cout << endl;
    }
}
// } Driver Code Ends