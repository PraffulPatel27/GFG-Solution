//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {

  public:
    vector<int> alternateSort(vector<int>& arr) {
        // Your code goes here
        priority_queue<int> maxheap;
        sort (arr.begin(), arr.end());
        
        for (auto val: arr) {
            maxheap.push(val);
        }
        
        vector<int> ans;
        int i = 0;
        while (ans.size() != arr.size()) {
            ans.emplace_back (maxheap.top());
            maxheap.pop();
            
            if (ans.size() != arr.size()) {
                ans.emplace_back (arr[i++]);
            }
        }
        
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        vector<int> ans = obj.alternateSort(arr);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends