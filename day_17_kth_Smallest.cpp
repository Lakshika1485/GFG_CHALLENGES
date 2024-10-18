class Solution {
  public:
    // arr : given array
    // k : find kth smallest element and return using this function
    int kthSmallest(vector<int> &arr, int k) {
        // code here
        sort(arr.begin(),arr.end());
        
        return arr[k-1];
      
      // this code will work but we can use it like the above one which is 
      // short and relevant method.
        // int n = arr.size();
        // for(int i = 1; i < n; i++)
        // {
        //     if(i==k-1)
        //     {
        //         return arr[i];
        //     }
        // }
        // return {1};
    }
};
