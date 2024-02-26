//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
		void printSubsequences (string& s, vector<string> &ans,string output,int i,int& n) {
    // base case
    if (i >= n) {
        if (output != "") {
            ans.push_back (output);
        }
        return;
    }

    // recursive relation
      output.push_back (s[i]);
      printSubsequences (s, ans, output, i+1, n);
      output.pop_back ();

       // exclude case
      printSubsequences (s, ans, output, i+1, n);
    }

	vector<string> AllPossibleStrings(string s){
	  // Code here
	  
	   int n = s.length();
	   string output = "";
       vector<string> ans;

       int i = 0;
       printSubsequences (s , ans, output ,i , n);
       
       sort(ans.begin(), ans.end());
       
       return ans;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}
// } Driver Code Ends