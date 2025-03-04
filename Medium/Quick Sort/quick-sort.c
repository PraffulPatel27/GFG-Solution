//{ Driver Code Starts
//Initial Template for C

#include <stdio.h>

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// } Driver Code Ends
//User function Template for C

//Function to sort an array using quick sort algorithm.
 void quickSort(int arr[], int low, int high)
    {
        if(low<high){
            int pi = partition(arr,low,high);
            quickSort(arr,low,pi-1);
            quickSort(arr,pi+1,high);
        }
    }
    int partition (int arr[], int low, int high)
    {
       int i=low-1;
       int pi = arr[high];
       for(int j=low;j<high;j++){
           if(arr[j]<pi){
               i++;
               int temp = arr[i];
               arr[i] = arr[j];
               arr[j] = temp;
           }
       }
       int p = arr[i+1];
       arr[i+1] = arr[high];
       arr[high] = p;
       return i+1;
    }

//{ Driver Code Starts.
int main()
{
    int arr[1000],n,T,i;
    scanf("%d",&T);
    while(T--){
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
    quickSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends