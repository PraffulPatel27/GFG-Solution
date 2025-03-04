//{ Driver Code Starts
#include<bits/stdc++.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

// } Driver Code Ends
/* You are required to complete the function below
*  arr[]: input array
*  n: size of array
*/
class Solution{
  public:
    //Function to find triplets with zero sum.
    bool findTriplets(int arr[], int n)
    { 
        //Your code here
    sort(arr,arr+n);
        for(int i=0;i<n-2;i++)
        {
        int j=i+1;
        int k=n-1;
        while(k>j)
        {
            if(arr[i]+arr[j]+arr[k]>0)
            {
                k--;
            }
            else if(arr[i]+arr[j]+arr[k]<0)
            {
                j++;
            }
            else
            return 1;
        }
        }
        return 0;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
	cin>>t;
	while(t--){
    	int n;
    	cin>>n;
    	int arr[n]={0};
    	for(int i=0;i<n;i++)
    		cin>>arr[i];
    	Solution obj;
        if(obj.findTriplets(arr, n))
            cout<<"1"<<endl;
        else 
            cout<<"0"<<endl;
	}
    return 0;
}
// } Driver Code Ends