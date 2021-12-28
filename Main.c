/**
 * @file Main.c
 * @author Henrique Peixoto (henrique.peixoto1512@gmail.com)
 * @brief Resolução do Problema B.
 * @version 0.1
 * @date 2021-12-28
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <math.h>
#include <stdio.h>

/**
 * @brief Retorna em quantas empresas pode ser investido o valor N de acordo com
 * a regra do exercício.
 * 
 * @param N 
 * @param K 
 * @return int 
 */
int dividirCarteira(double N, double K)
{
    if (N <= K) return 1;

    return dividirCarteira(floor(N / 2), K) + dividirCarteira(ceil(N / 2), K);
}

int main(int argc, char const *argv[])
{
    int n = 0;
    int k = 0;

    do
    {
        
        scanf("%d %d", &n, &k);
        
        if ((n != 0) && (k != 0))
        {
            printf("%d\n", dividirCarteira(n, k));
        }

    } while ((n != 0) && (k != 0));

    return 0;
}
