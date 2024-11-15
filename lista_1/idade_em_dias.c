#include <stdio.h>

int main() {
    int A;
    scanf("%d", &A);
    int X = A/365;
    int J = A - 365*X;
    int Y = J/30;
    int Z = J%30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", X, Y, Z);
    return 0;
}