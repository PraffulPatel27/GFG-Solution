//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    int rowWithMax1s(vector<vector<int> > &arr) {
        // code here
        int max_row= INT_MIN, i=0, ans= -1;
        
        for (i=0; i<arr.size(); i++) {
            int cnt=0;
            for (int j=0; j<arr[0].size(); j++) {
                if (arr[i][j] == 1)
                   cnt++;
            }
            
            if (cnt > max_row && cnt >= 1) {
                max_row= cnt;
                ans= i;
            }
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int> > arr(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends