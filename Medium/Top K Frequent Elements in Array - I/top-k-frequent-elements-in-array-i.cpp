//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> topK(vector<int>& nums, int k) {
        // Code here
        unordered_map<int,int> ump;
      vector<int> get;
      int n= nums.size();
      
      for (auto ch:nums)
         ump[ch]++;
         
      priority_queue<pair<int,int>> pq;
      
      for (auto y:ump) 
         pq.push ({y.second, y.first});
         
      while (!pq.empty() && k) {
          pair<int,int> temp= pq.top();
          pq.pop();
          get.emplace_back (temp.second);
          k--;
      }
      
      return get;
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (auto &i : nums) cin >> i;
        int k;
        cin >> k;
        Solution obj;
        vector<int> ans = obj.topK(nums, k);
        for (auto i : ans) cout << i << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends