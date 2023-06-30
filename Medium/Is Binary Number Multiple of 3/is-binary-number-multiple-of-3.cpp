//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
		
	int isDivisible(string s)
	{
	    //complete the function here
	   // int num = 0, po = 0, size = s.length()-1;
	   // long long int n = stoi (s); 
	    
	   // while (n)
	   // {
	   //     int rem = n%10;
	   //     num+= ((pow(2, po)) * rem);
	   //     po++;
	   //     size--;
	   //     n/= 10;
	   // }
	   //  if (num%3 == 0)
	   //    return (num / 3);
	       
	   //  else
	   //    return 0;
	   
	   int i , odd = 0, eve = 0,  n=s.size();
	    for (i=0; i<n; i++)
	    {
	        if (s[i] == '1')
	        {
	            if (i % 2)
	              odd++;
	            
	            else 
	              eve++;
	        }
	    }
	    return (odd-eve)%3==0;
	}

};

//{ Driver Code Starts.
int main(){
    
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout << ob.isDivisible(s) << endl;
    }
return 0;
}


// } Driver Code Ends