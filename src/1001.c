#include <stdio.h>

int get_steps(int n);

int main(void)
{
    int n;

    while (scanf("%d", &n) != EOF)
    {
        printf("%d\n", get_steps(n));
    }

    return 0;
}

int get_steps(int n)
{
    int steps = 0;

    while (n != 1)
    {
        steps++;
        if (n % 2 == 0)
        {
            n /= 2;
        }
        else
        {
            n = (3 * n + 1) / 2;
        }
    }

    return steps;
}