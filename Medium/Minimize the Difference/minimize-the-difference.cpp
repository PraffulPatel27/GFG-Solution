//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
  public:
    int minimizeDifference(int n, int k, vector<int> &arr) {
        // code here
        int ans = INT_MAX;
    int min_val = INT_MAX;
    int min1 = INT_MAX;
    int max_val = INT_MIN;
    int max1 = INT_MIN;
    vector<int> minl(n);
    vector<int> minr(n);
    vector<int> maxl(n);
    vector<int> maxr(n);

    for (int i = 0, j = n - 1; i < n; i++, j--) {
        min_val = min(min_val, arr[i]);
        max_val = max(max_val, arr[i]);
        min1 = min(min1, arr[j]);
        max1 = max(max1, arr[j]);
        minl[i] = min_val;
        maxl[i] = max_val;
        minr[j] = min1;
        maxr[j] = max1;
    }

    for (int i = 0; i <= n - k; i++) {
        if (i > 0 && i < n - k) {
            int min_diff = min(minl[i - 1], minr[i + k]) ;
            int max_diff = max(maxl[i - 1], maxr[i + k]);
            ans = min(ans, abs(max_diff - min_diff));
        } else if (i == 0) {
            ans = min(ans, maxr[i + k] - minr[i + k]);
        } else {
            ans = min(ans, maxl[i - 1] - minl[i - 1]);
        }
    }
    return ans;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int n;
        scanf("%d",&n);
        
        
        int k;
        scanf("%d",&k);
        
        
        vector<int> arr(n);
        Array::input(arr,n);
        
        Solution obj;
        int res = obj.minimizeDifference(n, k, arr);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends