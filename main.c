#include <stdio.h>
int policz(int,int);
int main() {
    printf("Hello, World!\n");
    printf("w pierwszym branchu 2+3=%d",policz(2,3));
    return 0;
}
int policz(int a,int b)
{
    return a*b;
}