#include <stdio.h>

void Selection_sort(int a[], int i, int j, int n, int flag)
{
    int temp;
 
    if (i < n - 1)
    {
        if (flag)
        {
            j = i + 1;
        }
        if (j < n)
        {
            if (a[i] > a[j])
            {   
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;}
        
            Selection_sort(a, i, j + 1, n, 0);
        }
        Selection_sort(a, i + 1, 0, n, 1);
    }
}
 


int main()
{
    int n, temp, i, j;
 
    scanf("%d", &n);
    int a[n];
    
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    Selection_sort(a, 0, 0, n, 1);
    
    for (i = 0; i < n; i++)
    {
        printf("%d  ", a[i]);
    }
 
    return 0;
}

