#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    int quarters = 25;
    int dimes = 10;
    int nickels = 5;
    int pennies = 1;
    int coins;
    int cents;
    float change;
    do 
    {
    change = get_float("Change owed: ");
    cents = round(change * 100);
        if (cents<=0) 
        {
        printf("Change owed: foo\n");
        }
    }
    while (cents<=0);
   
    coins = cents / quarters + (cents % quarters) /dimes + ((cents % quarters) % dimes / nickels) + (((cents % quarters) % dimes % nickels)) / pennies;
    {
    printf("%i\n", coins);
    } 
}
