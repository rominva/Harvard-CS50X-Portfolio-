// 1) prompts the user for a credit card number "Number: " 💯
// you may assume that the user’s input will be entirely numeric
// and that it won’t have leading zeroes
// But do not assume that the user’s input will fit in an int!
// Best to use get_long from CS50’s library to get users’ input

// 2) Check Start & Sum of the digits
// American Express => 15-digit numbers | start with 34 or 37
// MasterCard => 16-digit numbers | start with 51, 52, 53, 54, or 55
// Visa => 13 or 16 digit numbers | start with 4

// 3) also check Luhn’s Algorithm checksum 💯

// 4) reports whether it is a valid American Express, MasterCard, or Visa card number 💯
// "AMEX\n" or "MASTERCARD\n" or "VISA\n" or "INVALID\n"

// 🔆 sample valid card: 4003600000000014  ==> sum: 20 | Visa

#include <cs50.h>
#include <math.h>
#include <stdio.h>

int count_digits(long num);
int cal_start(long num, int count);
int check_Luhns_Algorithm(long num);
string card_type(int count, int start);

int main(void)
{
    // Get the number from user
    long num;
    do
    {
        num = get_long("Number: ");
    }
    while (num < 0);

    // calculate the number of digits
    int count = count_digits(num);

    // valididate the number of digits to be 15 or 13 or 16
    if (count != 15 && count != 16 && count != 13)
    {
        printf("INVALID\n");
        return 0;
    }

    // devide the start of digits
    int start = cal_start(num, count);

    // Validate the start
    if (start != 34 && start != 37 && start != 51 && start != 52 && start != 53 && start != 54 &&
        start != 55 && start != 4)
    {
        printf("INVALID\n");
        return 0;
    }

    // check the Luhn’s Algorithm checksum
    int sum = check_Luhns_Algorithm(num);

    if (sum % 10 != 0)
    {
        printf("INVALID\n");
        return 0;
    }

    // Detemine the cart type
    string result = card_type(count, start);

    printf("%s", result);
}

int count_digits(long num)
{
    int count = 0;
    while (num > 0)
    {
        num /= 10;
        count++;
    }

    return count;
}

// American Express => 15-digit numbers | start with 34 or 37
// MasterCard => 16-digit numbers | start with 51, 52, 53, 54, or 55
// Visa => 13 or 16 digit numbers | start with 4
int cal_start(long num, int count)
{
    int start;
    if (count == 15)
    {
        start = num / pow(10, 13);
    }
    else if (count == 13)
    {
        start = num / pow(10, 12);
    }
    else // 16 digits
    {
        start = num / pow(10, 14);

        if (start / 10 == 4)
        {
            start = 4;
        }
    }

    return start;
}

// sample valid Visa: 4003600000000014  ==> sum: 20
int check_Luhns_Algorithm(long num)
{
    int sum = 0;

    // Odd numbers sum directly from right to left
    while (num > 0)
    {
        int remainder_odd = num % 10;
        sum += remainder_odd;
        num /= 10;

        // printf("\nodds\n");
        // printf("remainder_odd: %i\n", remainder_odd);
        // printf("sum: %i\n", sum);
        // printf("num: %li\n", num);

        // Even digits would double then sum digit by digits if > 9 for example (10 = 1 + 0)
        if (num > 0)
        {
            int remainder_even = (num % 10);
            int remainder_even_doub = remainder_even * 2;

            if (remainder_even_doub > 9)
            {
                int first_digit = remainder_even_doub / 10;
                int second_digit = remainder_even_doub % 10;
                sum = sum + first_digit + second_digit;
            }
            else
            {
                sum += remainder_even_doub;
            }
            num /= 10;

            // printf("\nevens\n");
            // printf("remainder_even: %i\n", remainder_even);
            // printf("remainder_even_doub: %i\n", remainder_even_doub);
            // printf("sum: %i\n", sum);
            // printf("num: %li\n", num);
        }
    }

    return sum;
}

// American Express => 15-digit numbers | start with 34 or 37
// MasterCard => 16-digit numbers | start with 51, 52, 53, 54, or 55
// Visa => 13 or 16 digit numbers | start with 4
string card_type(int count, int start)
{
    if (count == 15)
    {
        if (start == 34 || start == 37)
        {
            return "AMEX\n";
        }
    }
    else if (count == 13 && start == 4)
    {
        return "VISA\n";
    }
    else if (count == 16)
    {
        if (start == 4)
        {
            return "VISA\n";
        }
        // 51, 52, 53, 54, or 55
        else if (start == 51 || start == 52 || start == 53 || start == 54 || start == 55)
        {
            return "MASTERCARD\n";
        }
    }

    return "INVALID\n";
}
