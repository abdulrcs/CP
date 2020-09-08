#include <cstdio>
#include <cmath>
int l,p,x;
int main (void)
{
    scanf("%i", &l);
    for (int i = 0; i<l; i++)
    {
        scanf("%i", &p);
        x += pow((p-p%10)/10, p%10);
    }
    printf("%i\n", x);
}
