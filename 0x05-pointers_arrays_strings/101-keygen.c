#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 9

/**
 * main - generates a random password for 101-crackme
 *
 * Return: always 0
 */
int main(void)
{
    char password[PASSWORD_LENGTH + 1];
    int i;

    /* Initialize the random number generator */
    srand(time(NULL));

    /* Generate random characters for the password */
    for (i = 0; i < PASSWORD_LENGTH; i++)
    {
        int r = rand() % 62;

        if (r < 26)
        {
            password[i] = 'a' + r;
        }
        else if (r < 52)
        {
            password[i] = 'A' + r - 26;
        }
        else
        {
            password[i] = '0' + r - 52;
        }
    }

    /* Add null terminator to the end of the password */
    password[PASSWORD_LENGTH] = '\0';

    /* Print the password */
    printf("%s\n", password);

    return (0);
}
