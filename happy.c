/*
Problem: Happy Number
Description: Write a program to check if a number is a Happy Number. A happy number eventually reaches 1 when replaced by the sum of the squares of each digit, repeatedly.
Example:
Input: 19
Output: true (Happy Number)
Source: LeetCode (https://leetcode.com/problems/happy-number/)
*/

#include <stdio.h>
int printAndSum(int n)
{
    int sum = 0,digits[20],count = 0;
    while(n > 0)
    {
        digits[count++]= n % 10;
        n/=10;
    }
    for (int i = count - 1;i >= 0;i--)
    {
        printf("(%d)^2",digits[i]);
        sum += digits[i]*digits[i];
        if (i > 0)
        {
            printf(" + ");
        }
    }
    printf(" = %d\n", sum);

    return sum;
}
int isHappy(int n)
{
    int seen[1000] = {0}; 

    while (n != 1 && !seen[n])
    {
        seen[n] = 1;
        n = printAndSum(n);
    }

    if (n == 1)
    {
        printf("Result: true (Happy Number)\n");
        return 1;
    }
    else
    {
        printf("Result: false (Not Happy Number)\n");
        return 0;
    }
    
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("proof/explanation: \n");
    isHappy(n);
    return 0;
}

