#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iomanip>
#include <iostream>

using namespace std;
typedef long long int64;

int main()
{
    int i, t;
    while (scanf("%d", &t) && t) {
        for (i = 1; i <= t; ++i)
            if (i == 1)
                printf("%d", i);
            else
                printf(" %d", i);
        printf("\n");
    }
    return 0;
}
