#include <iostream>
#include <vector>
#include <string>

int calcular_stress_medio(int vetor[], int size)
{
    int media = 0;
    
    for (int i = 0; i < size; i++)
    {
        if(vetor[i] < 0)
        {
            vetor[i] = -vetor[i];
            media = media + vetor[i];
        } else
        {
            media = media + vetor[i];
        }
    }
    return media / size;
}

std::string mais_homens_ou_mulheres(int vetor[], int size)
{
    int cont_h = 0;
    int cont_m = 0;
    std::string h = "Existem mais homens.";
    std::string m = "Existem mais mulheres.";
    for (int j = 0; j < size; j++)
    {
        if (vetor[j] < 0)
        {
            cont_m++;
        } else {
            cont_h++;
        }
    }
    if (cont_h > cont_m)
    {
        return h;
    } else {
        return m;
    }
}

std::string qual_metade_mais_estressada(int vetor[], int size)
{
    int fir = 0;
    int sec = 0;
    std::string fir_m = "A primeira metade e mais estressada.";
    std::string sec_m = "A segunda metade e mais estressada.";
    for (int k = 0; k < size; k++)
    {
        if (vetor[k] < size / 3)
        {
            if (vetor[k] < 0)
            {
                vetor[k] = -vetor[k];
            }
            fir = fir + vetor[k];
        } else
        {
            if (vetor[k] < 0)
            {
                vetor[k] = -vetor[k];
            }
            sec = sec + vetor[k];
        }
    }
    if (fir > sec)
    {
        return fir_m;
    } else
    {
        return sec_m;
    }
}

std::string homens_sao_mais_estressados_que_mulheres(int vetor[], int size)
{
    int homens = 0;
    int mulheres = 0;
    std::string homens_m = "Homens sao mais estressados.";
    std::string mulheres_m = "Mulheres sao mais estressadas.";
    for (int z = 0; z < size; z++)
    {
        if (vetor[z] < 0)
        {
            vetor[z] = -vetor[z];
            mulheres = mulheres + vetor[z];
        } else
        {
            homens = homens + vetor[z];
        }
    }
    if (homens > mulheres)
    {
        return homens_m;
    } else
    {
        return mulheres_m;
    }
}

#define size 6

int main() 
{
    int vetor[size] = {2, 20, -1, -5, 2, -10};
    printf("A media de estresse da fila e: %d\n", calcular_stress_medio(vetor, size));
    std::cout<< mais_homens_ou_mulheres(vetor, size)<<std::endl;
    std::cout<< qual_metade_mais_estressada(vetor, size)<<std::endl;
    std::cout<< homens_sao_mais_estressados_que_mulheres(vetor, size)<<std::endl;
    
}