#include <stdio.h>
#include <stdlib.h>

int square(int side)
{
    return side * side;
}
int main(void)
{
    for (int x = 1; x <= 10; x++)
    {
        printf("%d ",square(x));
    }
    puts("");
    system("pause");
    return 0;
}