#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 100
#define MAX_DIGIT_VALUE 78
#define PASSWORD_SUM_TARGET 2772

/**
 * Generates a random password and prints it to stdout.
 * @param password An array to store the generated password.
 * @param length The length of the password array.
 */
void generate_password(int password[], int length)
{
    srand(time(NULL));
    for (int i = 0; i < length; i++)
    {
        password[i] = rand() % MAX_DIGIT_VALUE;
        putchar(password[i] + '0');
    }
}

/**
 * Calculates the sum of the digits in the password.
 * @param password An array containing the password digits.
 * @param length The length of the password array.
 * @return The sum of the password digits.
 */
int calculate_password_sum(int password[], int length)
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += password[i];
    }
    return sum;
}

/**
 * Adds a digit to the password to make its sum equal to PASSWORD_SUM_TARGET.
 * @param password An array containing the password digits.
 * @param length The length of the password array.
 * @param sum The current sum of the password digits.
 * @return The digit added to the password.
 */
int add_missing_digit(int password[], int length, int sum)
{
    int digit_to_add = PASSWORD_SUM_TARGET - sum;
    password[length - 1] = digit_to_add;
    putchar(digit_to_add + '0');
    return digit_to_add;
}

/**
 * Main function that generates a random valid password for 101-crackme.
 * @return Always 0 (Success).
 */
int main(void)
{
    int password[PASSWORD_LENGTH];
    generate_password(password, PASSWORD_LENGTH);
    int sum = calculate_password_sum(password, PASSWORD_LENGTH);
    if (sum < PASSWORD_SUM_TARGET)
    {
        add_missing_digit(password, PASSWORD_LENGTH, sum);
    }
    return 0;
}

