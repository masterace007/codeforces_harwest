#include <stdio.h>
using namespace std;

long long n;

int main()
{
    scanf("%I64d", &n);
    n++;
    if (n == 1) printf("0"); else if (n % 2 == 0) printf("%I64d", n / 2); else printf("%I64d", n);
    return 0;
}