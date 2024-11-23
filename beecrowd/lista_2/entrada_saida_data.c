#include <stdio.h>

int main()
{
    int x, y, z;
    scanf("%d/%d/%d", &x, &y, &z);
    printf("%02d/%02d/%02d\n", y, x ,z);
    printf("%02d/%02d/%02d\n", z, y, x);
    printf("%02d-%02d-%02d\n", x, y ,z);
    return 0;
}