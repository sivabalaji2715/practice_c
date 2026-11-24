#include <stdio.h>

int main()
{
    int a[7] = {10, 20, 10, 30, 20, 10, 40};
    int visited[7] = {0};

    int i, j, count;

    for(i = 0; i < 7; i++)
    {
        if(visited[i] == 1)
            continue;

        count = 1;

        for(j = i + 1; j < 7; j++)
        {
            if(a[i] == a[j])
            {
                count++;
                visited[j] = 1;
            }
        }

        printf("%d occurs %d times\n", a[i], count);
    }

    return 0;
}
