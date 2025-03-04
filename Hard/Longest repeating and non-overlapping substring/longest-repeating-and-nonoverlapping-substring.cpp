//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    string longestSubstring(string s, int n) {
        // code here
           int left = 0;

        string temp = "";
        string result;

        bool flag = true;
        
        int ans = -1;
        for (int right = 0; right < n; right++)
        {
            temp += s[right];

            if (s.find(temp, right + 1) != -1)
            {
                flag = false;
                if (right - left + 1 > ans)
                {
                    ans = right - left + 1;
                    result = temp;
                }
            }
            else
            {
                temp.erase(temp.begin());
                left++;
            }
        }
        
        if(flag){
            return "-1";
        }
        return result;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        string S;

        cin >> N;
        cin >> S;

        Solution ob;
        cout << ob.longestSubstring(S, N) << endl;
    }
    return 0;
}
// } Driver Code Ends