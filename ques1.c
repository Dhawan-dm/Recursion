#include <stdio.h>
 

int GCD(int x, int y)
{
    if (x == 0)
       return y;
    if (y == 0)
       return x;
 
    if (x == y)
        return x;

    if (x > y)
        return GCD(x-y, y);
    return GCD(x, y-x);
}
 

int main()
{
    int x,y;
    
    scanf("%d%d",&x,&y);
    printf("%d", GCD(x, y));
    return 0;
}
