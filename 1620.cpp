#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <stack>
#include <vector>
#define pb push_back
#define mp make_pair

using namespace std;

typedef long long int64;

char matrix[60][60];

int main()
{
    ios::sync_with_stdio(false);
    long double a;
    while (cin >> a && a) {
        long double an = 3.0 + (a - 2.0 - 1.0) * 2.0;
        cout << fixed << setprecision(6) << (an - a) / a << endl;
    }
    return 0;
}