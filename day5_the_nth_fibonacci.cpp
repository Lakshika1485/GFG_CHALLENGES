class Solution{
public:
    
    int fib(int N){
        
        int arr[N+1];
        arr[0]=0;
        arr[1]=1;
        
        for(int i = 2; i<=N; i++)
        {
            arr[i]=(arr[i-1]%10 + arr[i-2]%10)%10;
        }
        
        int x=arr[N];
        return x;
    }
};
