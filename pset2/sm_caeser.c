// Meaki Johoa Souley.     Kagame cohort.
// Check the validity of a given credit card of three different providers: American Express, MasterCard and Visa

#include <cs50.h>
#include <stdio.h>


int main(void)
{
    // Declaration and initialisation of the variables.
    long long creditCNumber;
    int counter = 0;
    long long ccard = 0;
    long long credit = 0;
    long long n = 0;
    int i = 0;
    int sum = 0;
    int sum1 = 0;
    long long creditC1 = 0;

    // Prompt the user for a valid credit card number and check if it is valid
    do
    {
        creditCNumber = get_long_long("Enter your credit card for verification: ");

    }

    while (creditCNumber <= 0);

    // declaring different variable from the credit card declaration
    creditC1 = creditCNumber;
    credit = creditCNumber;

    // loop in order to get the lengh of the credit card
    while (creditC1 > 0)
    {
        creditC1 = creditC1 / 10;
        counter++;
    }

    // Verify if the lengh of the given credit card meet the correct lengh
    if (counter == 13 || counter == 15 || counter == 16)

    {
        //loop the credit card digit in order to multiply the numbers that are at the even index by 2 and add those with all the rest  at the odd index together
        for (i = 1; i <= counter;  i++)
        {
            if (i % 2 == 0)
            {

                ccard = creditCNumber % 10;
                sum1 = ccard * 2;
            }

            else if (i % 2 != 0)

            {

                ccard = creditCNumber % 10;
                sum1 = ccard * 1;
            }

            else if (sum1 > 9)

            {
                sum1 = sum1 - 9;
            }

            sum = sum1 + sum;
            creditCNumber = creditCNumber / 10;
        }

        // check if the card is valid by looking at the last digit of the sum.
        if (sum % 10 == 0)
        {
            // Divid the credit card long long number in order to get a suit of two numbers
            while (credit > 100)

            {
                credit = credit / 10;
                n = credit;
            }

            // check the card information of the card by looking at the lengh and the first two digit
            if ((counter == 13 || counter == 16) && n == 40)

            {
                printf("Visa\n");
            }

            // check the card information of the card by looking at the lengh and the first two digit
            else if ((counter == 15) && (n == 34 || n == 37))

            {
                printf("AMEX\n");
            }

            // check the card information of the card by looking at the lengh and the first two digit
            else if ((counter == 16) && (n == 52 || n == 53 || n == 54 || n == 55))

            {
                printf("MasterCard\n");
            }

            else
             {
                     // Print out the invalidity of the credit card after the application of      algorithm
                     printf("INVALID\n");
             }

        }
         else

        {
            // Print out the invalidity of the credit card after the application of      algorithm
            printf("INVALID\n");
        }


    }

}