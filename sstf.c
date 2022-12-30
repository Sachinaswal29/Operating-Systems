#include <stdio.h>
#define m 30
#include <math.h>

int main()
{
    int n, dsk[m], cur_h, done[m], sum = 0, x, count = 0;
    printf("enter no: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &dsk[i]);
        done[i] = 0;
    }
    printf("Enter curr head: ");
    scanf("%d", &cur_h);

    x = cur_h;
    while (count != n)
    {
        int temp = 9999;
        int k = -1;
        for (int i = 0; i < n; i++)
        {
            if (x != dsk[i] && done[i] == 0)
            {
                if (temp > fabs(x - dsk[i]))
                {
                    temp = fabs(x - dsk[i]);
                    k = i;
                }
            }
        }
        sum = sum + temp;
        printf("%d ", dsk[k]);
        count++;
        x = dsk[k];
        done[k] = 1;
    }
    printf("\n%d", sum);
}
