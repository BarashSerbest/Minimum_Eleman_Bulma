#include <stdio.h>

int min_eleman(int dizi[], int n)
{
    int min = dizi[0],i;

    for(i=1; i<n; i++)
    {
        if(dizi[i] < min)
        {
            min = dizi[i];
        }
    }

    return min;
}

int main()
{
    int dizi[] = {4, 3, 6, 7, 8, 2};
    int n = sizeof(dizi) / sizeof(dizi[0]);
    int min = min_eleman(dizi, n);
    
    printf("En kucuk eleman: %d", min);

    return 0;
}
