//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	bool sameFreq(string s)
	{
	    // code here 
	     vector<pair<int,int>>check;
        unordered_map<int,int>mp,t;
        for(int i=0; i<s.size(); i++) {
            mp[s[i]]++;
        }
        for(auto i:mp) {
            t[i.second]++;
        }
        if(t.size()<=2) {
            for(auto i:t) {
                check.push_back({i.first,i.second});
            }
            int n = check.size();
            if(n==1) {
                return 1;
            }
            int a = check[0].first, b = check[1].first;
            if(a<b) {
                if((b-a==1 && t[b]==1) || a==1) {
                    return 1;
                }
                else {
                    return 0;
                }
            }
            if(b<a) {
                if((a-b==1 && t[a]==1) || b==1) {
                    return 1;
                }
                else {
                    return 0;
                }
            }
            
        }
        else {
            return 0;
        }
        return 0;
	}
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.sameFreq(s)<<endl;
    }
}



// } Driver Code Ends