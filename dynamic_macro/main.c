#include  <stdio.h>

#define a (x+1)

int x = 5;

void b() 
{
    x = a;
    printf("%d\n", x);
}

void c() 
{
    int x = 1;
    printf("%d\n", a);
}

int main()
{
    b();
    c();

    return 0;
}
