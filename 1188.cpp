#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <map>
#include <string>
#include <vector>
#define mp make_pair
#define pb push_back
#define INF 0x3f3f3f3f

using namespace std;
typedef long long int64;

int main()
{
    double line[12][12], sum = 0;
    char c;
    scanf(" %c", &c);
    for (int i = 0, le = 12, ld = -1; i < 12; ++i, le--, ld++)
        for (int j = 0; j < 12; ++j) {
            scanf("%lf", &line[i][j]);
            if (i > 6 && (j >= le && j <= ld))
                sum += line[i][j];
        }
    if (c == 'S')
        printf("%.1lf\n", sum);
    else
        printf("%.1lf\n", sum / 12);
    return 0;
}
