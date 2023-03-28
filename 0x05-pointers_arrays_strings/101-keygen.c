#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 100
#define MAX_CHARACTERS 78
#define TARGET_SUM 2772

int main(void)
{
    int password[PASSWORD_LENGTH];
    int i, sum, n;

    sum = 0;
    srand(time(NULL));

    for (i = 0; i < PASSWORD_LENGTH; i++)
    {
        password[i] = rand() % MAX_CHARACTERS;
        sum += (password[i] + '0');
        putchar(password[i] + '0');
        if ((TARGET_SUM - sum) - '0' < MAX_CHARACTERS)
        {
            n = TARGET_SUM - sum - '0';
            sum += n;
            putchar(n + '0');
            break;
        }
    }

    return 0;
}
