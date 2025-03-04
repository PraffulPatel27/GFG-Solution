//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    bool check_prime (int n) {
        if (n <= 1) 
          return false;
          
        for (int i=2; i<=n/2; i++) {
            if (n%i == 0)
               return false;
        }
        
        return true;
    }
    int minNumber(int arr[],int N)
    {
        int sum= accumulate (arr , arr+N, 0);
        int cnt=0;
        
        while (!check_prime(sum)) {
            sum++;
            cnt++;
        }
        
        return cnt;
    }
};


//{ Driver Code Starts.

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution obj;
        cout << obj.minNumber(arr, n)<<endl;
    }
    return 0;
}
// } Driver Code Ends