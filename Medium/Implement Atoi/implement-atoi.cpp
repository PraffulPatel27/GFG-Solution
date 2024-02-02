//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string s) {
        //Your code here
         int ans=0;
        int negative= 1;
        
        for (int i=0; i<s.length(); i++) {
            if (s[i] == '-')
              negative= -1;
            
            else if (s[i]>='0' && s[i]<='9') {
                int temp= s[i] - '0';
                ans= (ans*10) + temp;
            }
            else
              return -1;
        }
        
        if (negative == -1 && s[0] == '-')
          ans*= -1;
        
        else if (negative == -1 && s[0]!= '-')
          return -1; 
     
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}
// } Driver Code Ends