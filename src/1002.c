#include <stdio.h>
#include <string.h>

#define DIGITS_SIZE 10
#define STR_LEN 100

int main(void)
{
    char *digits[DIGITS_SIZE] = {"ling", "yi", "er", "san", "si",
                                "wu", "liu", "qi", "ba", "jiu"
                               };
    char str[STR_LEN + 1];

    while (scanf("%s", str) != EOF)
    {
        int len = strlen(str);
        int sum = 0;
        for (int i = 0; i < len; i++)
        {
            sum += str[i] - '0';
        }
        char tmp[STR_LEN + 1];
        memset(tmp, '\0', sizeof(tmp));
        sprintf(tmp, "%d", sum);

        len = strlen(tmp);
        for (int i = 0; i < len; i++)
        {
            if (i != 0)
            {
                printf(" ");
            }
            printf("%s", digits[tmp[i] - '0']);
        }
    }
}