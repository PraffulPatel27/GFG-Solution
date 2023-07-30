//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // Your code here
        unordered_map<char,int> cp;
        char maxocur='\0';
        int cnt=0;
        
        for (auto c : str)
        {
            cp[c]++;
            if (cnt<cp[c])
            {
                cnt=cp[c];
                maxocur=c;
            }
            else if (cnt==cp[c] && maxocur>c)
                maxocur=c;
        }
       
        return maxocur;
    }

};

//{ Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
// } Driver Code Ends