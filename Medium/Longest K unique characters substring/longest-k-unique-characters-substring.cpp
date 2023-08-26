//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
    // your code here
     map<char,int>map;
    int maxlength = 0;
    int currlength =0;
    int j=0;
    for(int i=0;i<s.length();i++){
        map[s[i]]++;
        while(map.size()>k && j<=i){
             if(map[s[j]]>1){
                map[s[j]]--;
             } else {
                 map.erase(s[j]);
             }
             j++;
        }
        if(map.size()==k){
           currlength = i-j+1; 
           maxlength =  max(currlength,maxlength);
        }
    }
    if(maxlength==0){
        return -1;
    }
    return maxlength;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends