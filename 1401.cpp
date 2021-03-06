/*
	Resolucao:
		Calcular todas as permutacoes entre os numeros dados
		Primeiramente, ordena-se os numeros e utiliza uma funcao da lib
		algorithm 'next_permutation', que gera todas as permutacoes entre
		esses numeros
*/

#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <vector>
#define pb push_back

using namespace std;

typedef long long ll;

int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    char perm[20];
    while (n--) {
        scanf(" %[^\n]", perm);
        int tam = strlen(perm);
        sort(perm, perm + tam);
        do {
            puts(perm);
        } while (next_permutation(perm, perm + tam));
        printf("\n");
    }
    return 0;
}
