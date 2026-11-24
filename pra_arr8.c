#include <stdio.h>

int main()
{
    int a[6] = {2, 7, 11, 15, 3, 6};
    int target = 9;
    int i, j;

    for(i = 0; i < 6; i++)
    {
        for(j = i + 1; j < 6; j++)
        {
            if(a[i] + a[j] == target)
            {
                printf("Pair found: %d and %d", a[i], a[j]);
                return 0;
            }
        }
    }

    printf("Pair not found");

    return 0;
}
