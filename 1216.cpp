#include <cstdio>
#include <iostream>
#include <cstring>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>

using namespace std;

int main()
{
	char resp[1000];
	double a, sum = 0, cont = 0;
	while (scanf(" %[^\n]s", &resp) != EOF)
	{
		scanf("%lf", &a);
		sum += a;
		cont++;
	}
	printf("%.1lf\n", sum / cont);
	return 0;
}
