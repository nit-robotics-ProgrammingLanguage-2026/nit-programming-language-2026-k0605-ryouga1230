#include <stdio.h>

int main(void)
{
    int n;
    long total = 0;
    scanf("%d", &n);

    if (n < 0)
    {
        printf("NG");
        return 0;
    }

    // for文を使い、breakやcontinueを使わずに1からnまでの偶数を足し合わせる
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            total += i;
        }
    }

    printf("%ld", total);
    return 0;
}
