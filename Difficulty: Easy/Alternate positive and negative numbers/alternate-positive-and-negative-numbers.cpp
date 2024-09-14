//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:

    void rearrange(vector<int> &arr) {
        // code here
        vector<int> ans;
        
        int pos = 0, neg = 0, n = arr.size();
        bool flag = true;
        
        while (pos < n && neg < n) {
            while (pos < n && arr[pos] < 0) {
                pos++;
            }
            
            while (neg < n && arr[neg] >= 0) {
                neg++;
            }
            
            if (flag && pos < n) {
                ans.emplace_back(arr[pos++]);
                flag = false;
            } else if (!flag && neg < n) {
                ans.emplace_back(arr[neg++]);
                flag = true;
            }
        }
        
        while (pos < n) {
            if (arr[pos] >= 0) 
               ans.emplace_back(arr[pos]);
               
            pos++;
        }
        while (neg < n) {
            if (arr[neg] < 0)
               ans.emplace_back(arr[neg]);
               
            neg++;
        }
        
        arr.swap(ans);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        int num;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution ob;
        ob.rearrange(arr);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends