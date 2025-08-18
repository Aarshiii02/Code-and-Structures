/*An ugly number is a positive integer which does not have a prime factor other than 2, 3, and 5.
Given an integer n, return true if n is an ugly number.*/

#include <stdio.h>
int isUgly(int n)      // Function to check if a number is ugly
{
    if (n <= 0) return 0;  // Ugly numbers are positive only
    
    // Keep dividing by 2, 3, and 5 while possible
    while (n % 2 == 0) 
    {
        n = n / 2;
    }
    while (n % 3 == 0) 
    {
        n = n / 3;
    }
    while (n % 5 == 0) 
    {
        n = n / 5;
    }
    // If after dividing, number becomes 1 → it's ugly
    return (n == 1);
}

int main() 
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (isUgly(n))
    {
        printf("%d is an Ugly Number.\n", n);
    }   
    else
    {
        printf("%d is NOT an Ugly Number.\n", n);
    }
    return 0;
}


/*How it works:
Input a number n.
If n is <= 0, it's not ugly.
Divide n by 2, 3, and 5 as long as possible.
If n finally becomes 1, it’s an ugly number.
Otherwise, if it has some other prime factor then its not ugly.*/