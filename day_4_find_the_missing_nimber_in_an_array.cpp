class Solution {
  public:

    // Note that the size of the array is n-1
    int missingNumber(int n, vector<int>& arr) {
     
     int sum=0;
     
     for(int i=0;i<n-1;i++)
     {
         sum+=arr[i];
     }
        int eSum = (n * (n + 1)) / 2;
        
        return eSum-sum;
        
    }
};
