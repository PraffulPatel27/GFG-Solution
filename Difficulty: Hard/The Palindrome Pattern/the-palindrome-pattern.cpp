//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:

    string pattern(vector<vector<int>> &arr) {
        // Code Here
           string ans = "-1";
        int n = arr.size();
        for(int i = 0; i < n; i++){
            bool flag = true;
            
            int temp1 = 0;
            int temp2 = n-1;
            
            while(temp1 <= temp2){
                if(arr[i][temp1] != arr[i][temp2]){
                    flag = false;
                }
                temp1++;
                temp2--;
            }
            
            if(flag){
                ans.erase();
                ans.append(to_string(i));
                ans.append(" R");
                return ans;
            }
        }
        
        for(int i = 0; i < n; i++){
            bool flag = true;
            
            int temp1 = 0;
            int temp2 = n-1;
            
            while(temp1 <= temp2){
                if(arr[temp1][i] != arr[temp2][i]){
                    flag = false;
                }
                temp1++;
                temp2--;
            }
            
            if(flag){
                ans.erase();
                ans.append(to_string(i));
                ans.append(" C");
                return ans;
            }
        }
        
        return ans;
    }
};


//{ Driver Code Starts.

int main() {

    int t, n, i, j, flag, k;
    cin >> t;

    while (t--) {
        cin >> n;
        vector<vector<int>> a(n, vector<int>(n));

        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++)
                cin >> a[i][j];
        }
        Solution ob;
        cout << ob.pattern(a) << endl;
    }
    return 0;
}
// } Driver Code Ends