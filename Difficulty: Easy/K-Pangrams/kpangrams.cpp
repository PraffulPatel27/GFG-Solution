//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:

    bool kPangram(string str, int k) {
        // code here
        vector<int> freq(26);
        int cnt=0, not_present=0;
        
        for (int i=0; i<str.length(); i++) {
            if (str[i] != ' ') {
                freq[str[i] - 'a']++;
                cnt++;
            }
        }
        
        for (auto pr:freq) {
            if (pr == 0)
               not_present++;
        }
        
        return ((not_present <= k) && cnt >= 26);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin.ignore();
        string str;
        getline(cin, str);

        int k;
        cin >> k;

        Solution ob;
        bool a = ob.kPangram(str, k);
        if (a)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
    return 0;
}
// } Driver Code Ends