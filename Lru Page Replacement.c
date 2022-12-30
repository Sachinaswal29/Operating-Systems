#include <stdio.h>
#define max 20
int findLRU(int time[], int n)
{
    int min = time[0], pos = 0;
    for (int i = 0; i < n; i++)
    {
        if (time[i] < min)
        {
            min = time[i];
            pos = i;
        }
    }
    return pos;
}
int main()
{
    int pn, page[max], fn, frame[max], avail, pagefault = 0, time[max], flag1, flag2, pos;
    printf("Enter the number of pages:");
    scanf("%d", &pn);
    printf("Enter the values of page:");
    for (int i = 0; i < pn; i++)
        scanf("%d", &page[i]);
    printf("Enter the number of frames:");
    scanf("%d", &fn);
    for (int i = 0; i < fn; i++)
        frame[i] = -1;
    for (int i = 0; i < pn; i++)
    {
        flag1 = flag2 = 0;
        for (int j = 0; j < fn; j++)
        {
            if (page[i] == frame[j])
            {
                avail++;
                time[j] = avail;
                flag1 = flag2 = 1;
                break;
            }
        }
        if (flag1 == 0)
        {
            for (int j = 0; j < fn; j++)
            {
                if (frame[j] == -1)
                {
                    avail++;
                    pagefault++;
                    frame[j] = page[i];
                    time[j] = avail;
                    flag2 = 1;
                    break;
                }
            }
        }
        if (flag2 == 0)
        {
            pos = findLRU(time, fn);
            avail++;
            pagefault++;
            frame[pos] = page[i];
            time[pos] = avail;
        }
        printf("\n");
        for (int k = 0; k < fn; k++)
            printf("%d\t", frame[k]);
    }
    printf("\nThe page fault is: %d", pagefault);
}