#include <stdio.h>
#include <math.h>
#define max 20
int main()
{
    int n, dsk[max], cur_head;
    printf("Enter the number of disk:");
    scanf("%d", &n);
    printf("Enter disk numbers:");
    for (int i = 0; i < n; i++)
        scanf("%d", &dsk[i]);
    printf("Enter curr head value:");
    scanf("%d", &cur_head);
    int x, sum = 0;
    for (int i = 0; i < n; i++)
    {
        x = fabs(cur_head - dsk[i]);
        cur_head = dsk[i];
        sum += x;
    }
    printf("Seek Distance= %d\n", sum);
}