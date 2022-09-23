// Write a program to implement Orphan process.

#include <stdio.h>
#include <unistd.h>
int main()
{
    printf("Orphan Process:\n\n");
    int x = fork();
    if (x == 0)
    {
        printf("Child process id= %d\n", getpid());
        printf("Parent process id= %d\n", getppid());
    }
    else
    {
        sleep(5);
        printf("Process id of parent = %d\n", getpid());
    }
}
