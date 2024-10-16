class Solution {
  public:
    int majorityElement(vector<int>& arr) {
       int n = arr.size();
    
       for(int val: arr)
       {
           int freq = 0;
           
           for( int elem : arr)
           {
               if(val==elem)
               {
                   freq++;
               }
           }
           
           if(freq > n/2)
           {
               return val;
           }
           
       }
      
        return {-1};
    }
};
