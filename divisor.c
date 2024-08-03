#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    { 
        int n, k;
        scanf("%d%d", &n, &k);
        int ans = n; 
        for (int i = 1; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                if (i <= k)
                {
                    ans = (ans > n / i) ? n / i : ans;
                }
                if (n / i <= k)
                {
                    ans = (ans > i) ? i : ans;
                }
            }
        }
        printf("%d\n", ans);  
    }
    return 0;
}
