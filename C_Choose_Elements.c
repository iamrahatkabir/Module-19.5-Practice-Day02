#include <stdio.h>

int main()
{
    long long int n, k;
    scanf("%lld %lld", &n, &k);
    long long int a[n];
    
    for(long long int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }

    

    for(long long int i = 0; i < n-1; i++)
    {
        for(long long int j = i+1; j < n; j++)
        {
            long long int temp = a[i];
            if(a[j] > a[i])
            {
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    long long int sum = 0;
    for(long long int i = 0; i < k; i++)
    {
        if(a[i] >= 0)
        {
            sum += a[i];
        }
    }

    printf("%lld", sum);

    
    return 0;
}