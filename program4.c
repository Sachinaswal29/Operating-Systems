// Write a program to implement Zombie Process.

#include <stdio.h>
#include <unistd.h>
int main()
{
    printf("Zombie Process:\n\n");
    int x = fork();
    if (x == 0)
    {
        printf("Process id of child: %d\n", getpid());
        printf("Parent id of child: %d\n", getppid());
    }
    else
    {
        sleep(5);
        printf("Process id of parent: %d\n", getpid());
    }
    return 0;
}
