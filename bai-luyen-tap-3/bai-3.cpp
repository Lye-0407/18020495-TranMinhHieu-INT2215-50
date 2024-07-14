bool is_prime(int n)
{
    int k = round(n/2) + 1;
    
    if (n == 0 || n == 1) 
            return 0;
    else
    {
        for (int i = 2; i < k; i++)
        {
            if (n % i == 0)
                return 0;
        }
    }
    return 1;
}

void print_prime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (is_prime(i) == 1)
            cout << i << " " << endl;
    }
}