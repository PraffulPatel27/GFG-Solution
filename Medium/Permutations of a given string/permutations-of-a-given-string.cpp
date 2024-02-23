//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	void printPermutations (string& str,int i,set<string>& ans) {
    // base case
    if (i >= str.length()) {
        ans.insert (str);
        return;
    }


    // swapping
    for (int j=i; j<str.length(); j++) {
        // swap 
        swap (str[i], str[j]);


        // Recursive call
        printPermutations (str, i+1, ans);


        // backtracking -< to recreate the original input string
        swap (str[i], str[j]);
    }
}

	vector<string>find_permutation(string S)
	{
	    // Code here there
	    vector<string> ans;
	    set<string> st;
	    int i=0;
	    
	    printPermutations (S, i, st);
	    
	    for (auto i: st) 
	       ans.emplace_back (i);
	    
	    return ans;
	}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    sort(ans.begin(),ans.end());
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends