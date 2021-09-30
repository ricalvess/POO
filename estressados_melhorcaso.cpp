#include <iostream>
#include <vector>

int procura_menor(int vetor[], int size)
{
    int menor = vetor[0];
    for (int i = 1; i < size; i++)
        if(vetor[i] < menor)
            menor = vetor[i];
    return menor;
}

int procura_maior(int vetor[], int size)
{
    int maior = vetor[0];
    for (int j = 1; j < size; j++)
        if (vetor[j] > maior)
            maior = vetor[j];
    return maior;
}

int procura_menor_pos(int vetor[], int size)
{
    int menor = vetor[0];
    int pos = 0;
    for (int k = 1; k < size; k++)
        if (vetor[k] < menor)
        {
            menor = vetor[k];
            pos = k;
        }
    return pos + 1;
}

int procura_menor_pos_apos(int vetor[], int size, int pos)
{
    int menor_apos = vetor[0];
    int pos_apos = 0;
    for (int z = pos; z < size; z++)
        if (vetor[z] < menor_apos)
        {
            menor_apos = vetor[z];
            pos_apos = z;
        }
    return pos_apos + 1;
}

int procura_melhor_se(int vetor[], int size)
{
    int menor_h = vetor[0];
    int pos_h = 0;
    for (int x = 1; x < size; x++)
        if (vetor[x] > 0 && vetor[x] < menor_h)
        {
            menor_h = vetor[x];
            pos_h = x;
        }
    return pos_h + 1;
}

#define size 6

int main()
{
    int vetor[size] = {2, 20, -1, -5, 2, -10};
    printf("O menor valor da lista e: %d\n", procura_menor(vetor, size));
    printf("O maior valor da lista e: %d\n", procura_maior(vetor, size));
    printf("A posicao do menor valor da lista e: %d\n", procura_menor_pos(vetor, size));
    printf("A posicao do menor valor da lista apos a posicao e: %d\n", procura_menor_pos_apos(vetor, size, 3));
    printf("A posicao do homem mais calmo da lista e: %d\n", procura_melhor_se(vetor, size));

}