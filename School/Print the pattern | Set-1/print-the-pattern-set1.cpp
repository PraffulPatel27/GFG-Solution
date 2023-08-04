//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
void printPat(int n);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n;
	cin>>n;
    printPat(n);
    cout<<endl;
	}
}
// } Driver Code Ends


/*You are required to complete this method*/
void printPat(int n)
{
//Your code here
   int k=n,p=n;
   for (int i=1; i<=n; i++)
   {
       k=n;
       for (int j=1; j<=n; j++)
       {
          for (int l=p; l>=1; l--)
           cout<<k<<" ";
           
           k--;
       }
       cout<<"$";
       p--;
   }
}