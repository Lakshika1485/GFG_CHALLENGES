class Solution
{
    public:
    
    vector<long long> printFibb(int n) 
    {
       vector<long long> fib_sequence(n);

   
    if (n > 0) fib_sequence[0] = 1;
    if (n > 1) fib_sequence[1] = 1;

    
    for (int i = 2; i < n; i++) {
        fib_sequence[i] = fib_sequence[i - 1] + fib_sequence[i - 2];
    }

    return fib_sequence;
        
    }
};
