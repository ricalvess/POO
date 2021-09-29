#include <iostream>
#include <vector>

bool existe(int vetor[], int size, int value)
{
    for (int i = 0; i < size; i++)
        if(vetor[i] == value)
            return true;
    return false;
}

int contar(int vetor[], int size, int value)
{
    int x = 0;
    for (int j = 0; j < size; j++)
        if (vetor[j] == value)
            x = x + 1;
    return x;
}

int procurar_valor(int vetor[], int size, int value)
{
    for (int k = 0; k < size; k++)
        if(vetor[k] == value)
            return k + 1;
}
int procurar_valor_apos(int vetor[], int size, int value, int pos)
{
    for (int n = pos; n < size; n++)
        if (vetor[n] == value)
            return n + 1;

}


#define size 6

int main()
{
    int vetor[size] = {2, 20, -1, -5, 2, -10};
    printf("%d\n", existe(vetor, size, -1));
    printf("O numero de vezes que aparece = %d\n", contar(vetor, size, 2));
    printf("A posicao em que o numero aparece a primeira vez e = %d\n", procurar_valor(vetor, size, 2));
    printf("Dada a posicao para iniciar a busca, a proxima posicao em que aparece e = %d\n", procurar_valor_apos(vetor, size, 1, 2));
}