int GCD(int a, int b)
{
    if (a == 0 || b == 0) return a + b;
    while (a != b)
    {
        if (a > b)
            a -= b;
        else
            b -= a;
    }
    return a;
}

bool is_coprime(int a, int b)
{
    if (GCD(a, b) == 1) return true;
    else return false;
}