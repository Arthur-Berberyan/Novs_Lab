bool isEven(int n)
{
    if (n ^ 1 == n + 1)
        return true;
    else
        return false;
}

// Time complexity O(n)
