#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <map>
#include <vector>
#define pb push_back
#define mp make_pair

using namespace std;

typedef pair<int, int> prime_pot;
typedef long long int64;

int main()
{
    int64 a, b;
    while (scanf("%lld %lld", &a, &b) != EOF)
        printf("%lld\n", a * b * 2);
    return 0;
}
