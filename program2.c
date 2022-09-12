/*Write a program to create a child process in parallel to main process.Define an array of numbers the child process
has to calculate sum of even numbers and parent process has to calculate sum of odd numbers.*/

#include <stdio.h>
#include <unistd.h>
int main()
{
    int even_sum = 0, odd_sum = 0;
    int A[7] = {3, 2, 5, 7, 1, 8, 9};
    int x = fork();
    if (x != 0)
    {
        for (int i = 0; i < 7; i++)
        {
            if (A[i] % 2 == 0)
            {
                even_sum += A[i];
            }
        }
        printf("Even sum: %d and process id: %d\n", even_sum, getpid());
    }
    else
    {
        for (int i = 0; i < 7; i++)
        {
            if (A[i] % 2 != 0)
            {
                odd_sum += A[i];
            }
        }
        printf("Odd sum: %d and process id: %d\n", odd_sum, getpid());
    }
}
