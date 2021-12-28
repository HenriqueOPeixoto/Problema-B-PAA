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
    
    return 0;
}
