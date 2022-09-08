//Write a program to use fork function in child process.
#include <stdio.h>
#include <unistd.h>
int main()
{
    fork();
    printf("Program id: %d\n", getpid());
    return 0;
}