#include <stdio.h>
void swap(int *a, int *b){
    int c = *a;
    *a = *b;
    *b = c;
}
int main(void)
{
    int a;
    int b;
    scanf("%d\n", &a);
    scanf("%d", &b);
    swap(&a, &b);
    printf("a=%d\nb=%d\n", a, b);
}
