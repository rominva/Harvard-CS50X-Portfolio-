// Coins = quarters=25, dimes=10, nickels=5, pennies=1
// prompt the user for an int greater than 0 => "Change owed: "
// Re-prompt the user, again and again as needed, if their input is not greater than or equal to 0
// (or if their input isn’t an int at all!).
// prints the minimum coins needed to make the given
// amount of change, in cents

#include <cs50.h>
#include <stdio.h>

int cal_quarters(int change);
int cal_dimes(int change);
int cal_nickels(int change);

int main(void)
{
    // Prompt the user for change owed, in cents
    int change;
    do
    {
        change = get_int("Change owed: ");
    }
    while (change < 0);

    // Calculate how many quarters you should give customer
    int quarters = cal_quarters(change);

    // Subtract the value of those quarters from cents
    change -= quarters * 25;

    // Calculate how many dimes you should give customer
    int dimes = cal_dimes(change);

    // Subtract the value of those dimes from remaining cents
    change -= dimes * 10;

    // Calculate how many nickels you should give customer
    int nickels = cal_nickels(change);

    // Subtract the value of those nickels from remaining cents
    change -= nickels * 5;

    // Calculate how many pennies you should give customer
    int pennies = change;

    // Subtract the value of those pennies from remaining cents
    // change -= pennies * 1

    // Sum the number of quarters, dimes, nickels, and pennies used
    int sum = quarters + dimes + nickels + pennies;

    // Print that sum
    printf("%i\n", sum);
}

// quarters = 25
int cal_quarters(int change)
{
    int quarters = change / 25;

    return quarters;
}

// dimes = 10
int cal_dimes(int change)
{
    int dimes = change / 10;

    return dimes;
}

// nickels = 5
int cal_nickels(int change)
{
    int nickels = change / 5;

    return nickels;
}
