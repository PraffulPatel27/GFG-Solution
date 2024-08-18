//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool canSplit(vector<int>& arr) {
        // code here
         
        int n = arr.size();
        
        // Calculate total sum of array
        int sum = 0;
        for(auto it : arr) sum += it;
        
        // If sum is odd we cannot split
        if(sum % 2) return false;
        
        // Try every pair
        int firstHalf = 0;
        for(int i=0; i<n; i++){
            firstHalf += arr[i];
            int secHalf = sum - firstHalf;
            if(firstHalf == secHalf) return true;
        }
        
        return false;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t-- > 0) {
        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<int> arr;
        string temp;
        while (ss >> temp) {
            arr.push_back(stoi(temp));
        }

        Solution obj;
        bool res = obj.canSplit(arr);
        cout << (res ? "true" : "false") << endl;
    }
    return 0;
}
// } Driver Code Ends