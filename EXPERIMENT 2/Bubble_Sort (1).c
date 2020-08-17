/* Program for Bubble Sort using Functions */

#include <stdio.h>
void bubble_sort(int a[10]);
int main()
{
    int a[10] = {30,21,32,45,64,98,45,66,94,100};
    printf("The Array before the Bubble Sort is: {30, 21, 32, 45, 64, 98, 45, 66, 94, 100}\n");
    bubble_sort(a);
    return 0;
}
void bubble_sort(int a[10])
{
    int i, j, k;
    for(i=0;i<10;i++)
    {
        for(j=0;j<9;j++)
        {
            if(a[j] > a[j + 1])
            {
                k = a[j];
                a[j] = a[j + 1];
                a[j + 1] = k;
            }
        }
    }
    printf("The Sorted Array is:\n");
    for(i = 0; i < 10; i++)
    printf("%d\t", a[i]);
}
    