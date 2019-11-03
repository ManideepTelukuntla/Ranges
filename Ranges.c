#include <stdio.h>

int main()
{
    int a[] = {1, 2, 3, 5, 7, 9, 10, 11, 13, 14};
    int start_value = a[0];
    int end_value = a[0];
    int size = sizeof(a)/sizeof(a[0]);
    
    for (int i = 0, range_value = 1; i < size; i++)
    {
        if (a[i] + 1 == a[i+1])
            continue;
        else
            end_value = a[i];
        
        printf("Range[%d] : (%d %d)\n", range_value, start_value, end_value);
        range_value++;
        
        start_value = a[i + 1];
        end_value = a[i + 1];
    }
    
    printf("%d %d\n", start_value, end_value);

    return 0;
}
