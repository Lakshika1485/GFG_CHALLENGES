class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int n=arr.size();
        sort(arr.begin(),arr.end());
        for(int i=n-1;i>=0;i--)
        {
            if(arr[i]==arr[n-1])
            {
                return arr[i];
            }
        }
        
        return -1;
    }
};

