// Write a program to implement Orphan process.

#include <stdio.h>
#include <unistd.h>

int main()
{
    printf("Sachin Aswal\n\n");
    printf("Orphan Process\n\n");
    int x = fork();
    if (x != 0)
    {
        printf("Process ID of Parent: %d\n", getpid());
    }
    else
    {
        sleep(5);
        printf("Process ID of child: %d\n", getpid());
        printf("Its Parent ID: %d\n", getppid());
    }
    return 0;
}

