//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
   string calSum(string a, string b) {
       int i=a.length()-1, j=b.length()-1;
       string ans= "";
       int carry=0;
       
       while(i>=0 && j>=0) {
           int sum = (a[i]-'0') + (b[j]-'0') + carry;
           carry = sum/10;
           ans += sum%10+'0';
           i--,j--;
       }
       
       while(i>=0) {
          int sum = (a[i]-'0') + carry;
           carry = sum/10;
           ans += sum%10 + '0';
           i--;
       }
       
       while(j>=0) {
          int sum = (b[j]-'0') + carry;
           carry = sum/10;
           ans += sum%10 + '0';
           j--;
       }
       
       if(carry) {
           ans += carry+'0';
       }
       
       reverse(ans.begin(),ans.end());
       return ans;
   }
    bool solve (string a, string b, string c) {
        string sum = calSum(a,b);
        int i=0,j=0;
        
        while (i<c.length() && j<sum.length()) {
            if(c[i]!=sum[j]) return false;
            i++,j++;
        }
        
        if(j!=sum.length()) return false;
        if(i==c.length())return true;
        c = c.substr(i);
        
        return solve(b,sum,c);
    }
    bool isAdditiveSequence(string n) {
        for (int i=0; i<n.length()/2; i++) {
            for (int j=i+1; j<n.length()-1; j++) {
                string a = n.substr(0,i+1);
                string b = n.substr(i+1,j-i);
                string c = n.substr(j+1);
                if(solve(a,b,c)) return true;
            }
        }
        return false;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;

    Solution sol;

    while (t--) {
        string s;
        cin >> s;

        bool result = sol.isAdditiveSequence(s);
        cout << result << endl;
    }

    return 0;
}

// } Driver Code Ends