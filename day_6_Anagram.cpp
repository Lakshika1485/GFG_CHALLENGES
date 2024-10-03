class Solution {
  public:
    // Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b) {

            sort(a.begin(),a.end());
            sort(b.begin(),b.end());
            
            // return a==b;
            // you can just write it to ways as it is given above for 
            // return a==b, it will give me yes or no which is true and false in
            // gfg practice test.
            
            int x=a.size();
            int y=b.size();
            int size=x>y?x:y;
            
            for(int i=0; i<size;i++){
                    if(a[i]!=b[i])
                    {
                        return false;
                    }
                    
                }
                return true;
    }
};

